#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<conio.h>
using std::cout;
using std::cin;
using std::string;
using namespace std;
string sname,sbranch,fname,mno,gender,per10,per12,hostel;
string tname,tmno,tsub,tage,tgender,eofexpe,exwork,exsal,qualif;
string bname,bedition,bcode,bauthor,bpublisher,bquant,bsub;
string a1,re,a2;
string dname,dbranch;
char expe;

int main()
{   
fstream f1;
// SECURITY BLOCK
    pass:
    system("CLS");
    const string user="ECB",pass="ECB123";
    string euser, epass;
    cout<<"\n\n\t\t\t\t\tENGINEERING COLLEGE BIKANER"<<endl;
            cout<<"\t\t\t\t\t---------------------------"<<endl;
            cout<<"             \t\t\t\t\tLOGIN PAGE"<<endl;
            cout<<"             \t\t\t\t\t----------"<<endl;
    cout<<"\n\n\t\t\tEnter Username: ";
    cin>>euser;
    cout<<"\n\t\t\tPassword: ";
    // cin>>epass;
    char s[10] = { 0 };
    int i;
    for (i = 0; i < 6;i++) {
        s[i] = _getch(); _putch('*');
        if (s[i] == '\0') 
        break;
    }
    if (euser==user && s==pass)
    {
        goto main;
    }
    else
    {   
        cout<<"Please Try again";
        goto pass;
    }

   
//MAIN MENU
    main:
    system("CLS");

    //VARIABLE BLOCK OF DETAILS OF STUDENT
    a1="sample.txt";
    a2="detail.txt";

    cout<<"\t\t\t\t\t\tENGINEERING COLLEGE BIKANER\n";
    cout<<"\t\t\t\t\t\t---------------------------\n";
    cout<<"\n";
    cout<<"\t+----------------------------+\n";
    cout<<"\t|     COLLEGE MANAGEMENT     |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 1. Student Management      |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 2. Staff Management        |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 3. Library Management      |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 4. Sports Management       |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 5. Marksheet Generator     |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 6. Hostel Management       |\n";
    cout<<"\t|                            |\n";
    cout<<"\t| 7. EXIT                    |\n";
    cout<<"\t|                            |\n";
    cout<<"\t+----------------------------+\n\n";
int choice;
string ar;
cout<<"Enter Your Choice: ";
cin>>choice;



switch (choice)
{

// STUDENT BLOCK
    case 1:
    {
        student:
        system("CLS");
//VARIABLES BLOCK
        int choice;
//HEADING PART
        cout<<"\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM\n";
        cout<<"\t\t\t\t\t\t-------------------------\n";
        cout<<"\n";
//CODE PART
        cout<<"\t+----------------------------+\n";
        cout<<"\t| 1. Add New Student         |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 2. Details of A Student    |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 3. Delete A Student        |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 4. Go Back                 |\n";
        cout<<"\t+----------------------------+\n\n";
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
//ADDING NEW STUDENT
        if(choice==1)
        {
            add:
            system("CLS");
//VARIABLE BLOCK
            char choice;
//VARIABLE BLOCK OF ADDING NEW STUDENT
            
//CODE BLOCK
            cout<<"\t\t\t\t\t\tADD NEW STUDENT\n";
            cout<<"\t\t\t\t\t\t---------------\n";
            cout<<"\n";
            cout<<"\tFILL THE FORM KINDLY\n";
            cout<<"\t--------------------\n\n";
            cout<<"Enter Name: ";
            getline(cin, sname);
            getline(cin, sname);
            cout<<"\nEnter Branch: ";
            getline(cin, sbranch);
            cout<<"\nEnter Father's Name: ";
            getline(cin, fname);
            cout<<"\nEnter Mobile No.: ";
            getline(cin, mno);
            cout<<"\nEnter Gender: ";
            getline(cin, gender);
            cout<<"\n10th Persentage: ";
            getline(cin, per10);
            cout<<"\n12th Persentage: ";
            getline(cin, per12);
            cout<<"\nHosteler Or Not (Y/N): ";
            getline(cin, hostel);
            
            
            f1.open("student.csv");
            f1<<"NAME:-"<<sname<<",BRANCH:-"<<sbranch<<",FATHER NAME:-"<<fname<<",MOBILE NUMBER:-"<<mno<<",GENDER:-"<<gender<<",10TH PERCENTAGE:-"<<per10<<"%,12TH PERCENTAGE:-"<<per12<<"%,HOSTELER OR NOT:-"<<hostel<<endl;
            f1.close();
            cout<<"\nForm Filled Successfully !!";
            cout<<"\n\nAdd More Student or Go Back (A/B): ";
            cin>>choice;
            if(choice=='A')
            {
                goto add;
            }
            else if(choice=='B')
            {
                goto student;
            }
            else
            {
                goto main;
            }
        }
//DETAILS OF A STUDENT
// 2nd CHOICE OF STUDENT BLOCK
        else if(choice==2)
        {
            system("CLS");
//VARIABLE BLOCK
            int s=1;
            char bb = 'y';
            string name[100];
//CODE BLOCK
            do{
            cout<<"\t\t\t\t\t\tDETAILS OF A STUDENT\n";
            cout<<"\t\t\t\t\t\t--------------------\n";

            cout<<"Enter Student Name: ";
            cin>>dname;

            f1.open("student.csv", ios::in | ios::out | ios::app);
            while (!f1.eof()) {
                getline ( f1, dname );
                cout << "\nDetails Of Student:-\n" <<dname ;
                }
            f1.close();
            cout<<"More Student's Detail or Go back (Y/N)";
            cin >> bb;
            }while(bb == 'y' || bb == 'Y');
        }
//DELETE A STUDENT
        else if(choice==3)
        {
            cout<<"\t\t\t\t\t\tDELETE A STUDENT\n";
            cout<<"\t\t\t\t\t\t----------------\n";

            cout<<"Enter Student ID: ";
            cout<<"Enter Branch Name: ";
            cout<<"More Student's Detail or Go back (Y/N)";
        }
//GOING TO MAIN MENU 
        else if(choice==4)
        {
            goto main;
        }
        break;
    }
// STAFF AND TEACHERS BLOCK
    case 2: 
    {
        blk2:
        system("CLS");
        int choice;
        cout<<"\t\t\t\t\t\tSTAFF MANAGEMENT SYSTEM\n";
        cout<<"\t\t\t\t\t\t-----------------------\n";
        cout<<"\n";
        cout<<"\t+----------------------------+\n";
        cout<<"\t| 1. Add New Teacher         |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 2. Details of A Teacher    |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 3. Delete A Teacher        |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 4. Go Back                 |\n";
        cout<<"\t+----------------------------+\n\n";
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
//ADDING TEACHERS
        if(choice==1)
        {
            teach:
            system("CLS");
            cout<<"\t\t\t\t\t\tADD NEW TEACHER\n";
            cout<<"\t\t\t\t\t\t---------------\n";
            cout<<"\n";
            cout<<"Please Fill the Information\n\n";
            cout<<"Enter Name: ";
            getline(cin,tname);
            getline(cin,tname);
            cout<<"\nEnter Mobile No.: ";
            getline(cin,tmno);
            cout<<"\nEnter Subject of Teaching: ";
            getline(cin,tsub);
            cout<<"\nAge: ";
            getline(cin,tage);
            cout<<"\nGender: ";
            getline(cin,tgender);
            cout<<"\nExperienced or Fresher (E/F): ";
            cin>>expe;
            if(expe=='E' || 'e')
            {    
                cout<<"\nHow Many years: ";
                cin>>eofexpe;
                cout<<"\nWhere are you have worked: ";
                cin>>exwork;
                cout<<"\nWhat was your Salary: ";
                cin>>exsal;
                cout<<"Form Filled Successfully !!!";
            }
            else
            {
                cout<<"\nQualifications: ";
                cin>>qualif;    
                cout<<"Form Filled Successfully !!!\n\n";
            }
//FILE HANDLING

            fstream f1;
            f1.open("teacher.csv", ios::out | ios::in);
            f1<<"Name:-"<<tname<<","<<"Mobile Number:-"<<tmno<<",Subject of Teacher:-"<<tsub<<",Age:-"<<tage<<",Gender:-"<<tgender<<",Expirence"<<eofexpe<<",Salary"<<exsal<<",Work"<<exwork<<endl;
            f1.close();

            char choise;
            cout<<"Want to Add more or Go Back(A/G): ";
            cin>>choise;
            
            if(choice=='A'|| choise=='a')
            {
                goto teach;
            }
            else
            {
                goto blk2;
            }
        }
//DETAILS OF A TEACHER
        else if(choice==2)
        {   
            char bb;
            
            do{
                cout<<"\t\t\t\t\t\tDETAILS OF A TEACHER\n";
            cout<<"\t\t\t\t\t\t--------------------\n";
            cout<<"\n";

            cout<<"Enter Teacher Name: ";
            cin>>tname;

            f1.open("teacher.csv", ios::in | ios::out | ios::app);
            while (!f1.eof()) {
                getline ( f1, tname );
                cout << "\nDetails Of Teacher:-\n" <<tname ;
                }
            f1.close();
            cout<<"More Teacher's Detail or Go back (Y/N)";
            cin >> bb;
            }while(bb == 'y' || bb == 'Y');

            
        }
//DELETE A TEACHER
        else if(choice==3)
        {
            cout<<"\t\t\t\t\t\tDELETE A TEACHER\n";
            cout<<"\t\t\t\t\t\t----------------\n";
            cout<<"\n";

            cout<<"Enter Teacher ID: ";
            cout<<"Enter Teacher Name: ";
        }
//GOING TO MAIN MENU 
        else if(choice==4)
        {
            goto main;
        }

    }
// LIBRARY AND BOOK BLOCK
    case 3:
    {   book:
    system("CLS");
//VARIABLES
        int choice;
        cout<<"\t\t\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n";
        cout<<"\t\t\t\t\t\t-----------------------\n";
        cout<<"\n";
        cout<<"\t+----------------------------+\n";
        cout<<"\t| 1. Add Books               |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 2. Give A Book to Student  |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 3. Return A Book           |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 4. Details of A Book       |\n";
        cout<<"\t|                            |\n";
        cout<<"\t| 5. Go Back                 |\n";
        cout<<"\t+----------------------------+\n\n";
        cout<<"\tEnter Your Choice: ";
        cin>>choice;
//ADDING BOOKS
        if(choice==1)
        {   abook:
            system("CLS");
            char ch;
            cout<<"\t\t\t\t\tADD BOOKS"<<endl;
            cout<<"\t\t\t\t\t---------"<<"\n\n";
            cout<<"Enter Book Name: ";
            getline(cin,bname);
            getline(cin,bname);
            cout<<"\nEnter Subject of Book: ";
            getline(cin,bsub);
            cout<<"\nEnter Book Edition: ";
            getline(cin,bedition);
            cout<<"\nEnter Book Code: ";
            getline(cin,bcode);
            cout<<"\nEnter Author Name: ";
            getline(cin,bauthor);
            cout<<"\nEnter Publisher Name: ";
            getline(cin,bpublisher);
            cout<<"\nEnter Quantity of Books: ";
            getline(cin,bquant);
            cout<<"\nBook added succesfully !";
//FILE HANDLING
            fstream f1;
            f1.open("book.csv", ios::out | ios::in);
            f1<<bcode<<"		   "<<bname<<"		  "<<bauthor<<"		   "<<bpublisher<<"         "<<bsub<<"    	"<<bquant<<endl;
            f1.close();
            
            cout<<"\n\nAdd more or Go Back (A/B): ";
            cin>>ch;
            if(ch=='A' || 'a')
                goto abook;
            else 
                goto book;
        }
//GIVING A BOOK 
        else if(choice==2)
        {
            give:
            system("CLS");
            string gbook,gbcode,gautho,gsname,gbranch,gyear,gdate;
            char ch;
            cout<<"\t\t\t\t\tGIVE A BOOK"<<endl;
            cout<<"\t\t\t\t\t-----------"<<"\n\n";
            cout<<"Book Name: ";
            cin>>gbook;
            cout<<"\nBook Code: ";
            cin>>gbcode;
            cout<<"\nAuthor Name: ";
            cin>>gautho;
            cout<<"\nStudent Name: ";
            cin>>gsname;
            cout<<"\nBranch: ";
            cin>>gbranch;
            cout<<"\nYear: ";
            cin>>gyear;
            cout<<"\nDate: ";
            cin>>gdate;
            cout<<"\nBook Alloted Succesfully! Take care of Book.\n\n";

            fstream f1;
            f1.open("give_a_book.txt", ios::out | ios::app);
            f1<<endl<<gbook<<"		   "<<gbcode<<"		  "<<gautho<<"		   "<<gsname<<"		"<<gbranch<<"		  "<<gyear<<"		"<<gdate<<endl;
            f1.close();

            cout<<"Go Back or Give more (G/M): ";
            cin>>ch;

            if(ch=='G'|| ch=='g')
            {
                goto book;
            }
            else
            {
                goto give;
            }

        }
//RETURNING A BOOK 
        else if(choice==3)
        {
            retrn:
            system("CLS");
            string rsname,rsbranch,rsyear,rbname,rbcode,rdate;
            char ch;
            cout<<"\t\t\t\t\tRETURN A BOOK"<<endl;
            cout<<"\t\t\t\t\t-------------"<<"\n\n";
            cout<<"Student Name: ";
            cin>>rsname;
            cout<<"\nBranch: ";
            cin>>rsbranch;
            cout<<"\nYear: ";
            cin>>rsyear;
            cout<<"\nBook Name: ";
            cin>>rbname;
            cout<<"\nBook Code: ";
            cin>>rbcode;
            cout<<"\nDate: ";
            cin>>rdate;
            cout<<"\n\nBook Return Succesfully !!";

//FILE HANDLING
            fstream f1;
            f1.open("return_a_book.csv", ios::out | ios::in);
            f1<<endl<<rsname<<"		   "<<rsbranch<<"		  "<<rsyear<<"		   "<<rbname<<"		"<<rbcode<<"		  "<<rdate<<endl;
            f1.close();
            
            cout<<"Return more or Go Back (G/M): ";
            cin>>ch;

            if(ch=='M' || ch=='m')
            {
                goto retrn;
            }
            else
            {
                goto book;
            }
        }
//DETAILS OF A BOOK 
        else if(choice==4)
        {
            char bb ='c';
            bname = "Null";
            
            do{
            cout<<"\t\t\t\t\tDETAILS A BOOK"<<endl;
            cout<<"\t\t\t\t\t--------------"<<"\n\n";

            cout<<"Enter Book Name: ";
            cin>>bname;

            f1.open("book.csv", ios::in | ios::out );
            while (!f1.eof()) {
                getline ( f1, bname );
                cout << "\nDETAILS A BOOK:-\n" <<bname ;
                }
            f1.close();
            cout<<"More BOOK Detail or Go back (Y/N)";
            cin >> bb;
            }while(bb == 'y' || bb == 'Y');
        }
//GOING BACK TO MAIN MENU 
        else if(choice==5)
        {
            goto main;
        }
    }
// SPORT BLOCK
    case 4:
    {
        sport:
//VARIABLE PART
        int schoice;
//HEADING PART
        cout<<"\t\t\t\t\t\tSPORTS MANAGEMENT SYSTEM\n";
        cout<<"\t\t\t\t\t\t------------------------\n";
        cout<<"\n";
//CODE PART
        cout<<"\t+------------------------------+\n";
        cout<<"\t| 1. Want to Join A Sport      |\n";
        cout<<"\t|                              |\n";
        cout<<"\t| 2. List of Students of Sport |\n";
        cout<<"\t|                              |\n";
        cout<<"\t| 3. Go Back                   |\n";
        cout<<"\t+----------------------------+\n\n";
        cout<<"\tEnter your Choice: ";
        cin>>schoice;
        if(schoice==1)
        {
//VARIABLE BLOCK
            int choice;
            cout<<"\t\t\t\t\t\t LIST OF SPORTS\n";
            cout<<"\t\t\t\t\t\t---------------\n";
            cout<<"\n";
            cout<<"\t+------------------------------+\n";
            cout<<"\t| 1. Bascket Ball     |\n";
            cout<<"\t|                     |\n";
            cout<<"\t| 2. Kho-Kho          |\n";
            cout<<"\t|                     |\n";
            cout<<"\t| 3. Badminton        |\n";
            cout<<"\t|                     |\n";
            cout<<"\t| 4. Football         |\n";
            cout<<"\t|                     |\n";
            cout<<"\t| 5. Table Tennis     |\n";
            cout<<"\t|                     |\n";
            cout<<"\t| 6. Go Back          |\n";
            cout<<"\t+---------------------+\n\n";
            cout<<"\tEnter your Choice: ";
            cin>>choice;    

            if(choice==6)
            {
                goto sport;
            }
        }
//LIST OF STUDENTS IN SPORTS
        else if(choice==2)
        {
            cout<<"\t\t\t\t\t\t LIST OF STUDENTS IN SPORTS\n";
            cout<<"\t\t\t\t\t\t---------------------------\n";
            cout<<"\n";
            cout<<"Sports Name: ";
        }
//GOING TO MAIN MENU 
        else if(choice==3)
        {
            goto main;
        }
    }
//MARKSHEET GENERATOR
    case 5:
    {
        system("CLS");
//HEADING PART
        cout<<"\t\t\t\t\t\t MARKSHEET GENERATOR\n";
        cout<<"\t\t\t\t\t\t--------------------\n";
        cout<<"\n\n";
//VARIABLE BLOCK
        string name,fname,cls;
        char board;
        int roll_no;
        int h,m,s,e,sst,san,total,per;
        string div;
//CODE BLOCK
//TAKING USER DETAILS
        cout<<"\t\t\t\t\tEnter your Details"<<endl;
        cout<<"\t\t\t\t\t------------------"<<"\n";
        cout<<"Enter your Board (R/C): ";
        cin>>board;
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter Father's Name: ";
        cin>>fname;
        cout<<"Enter Branch: ";
        cin>>cls;
        cout<<"Enter Roll No.: ";
        cin>>roll_no;
//INPUTING MARKS
        cout<<"\n\t\t\t\t\tEnter your Marks\n";
        cout<<"\t\t\t\t\t-----------------\n";
        cout<<"Hindi: ";
        cin>>h;
        cout<<"English: ";
        cin>>e;
        cout<<"Maths: ";
        cin>>m;
        cout<<"Social Science: ";
        cin>>sst;
        cout<<"Sanskrit: ";
        cin>>san;
        cout<<"Science: ";
        cin>>s;
//MARKS CALCULATION
        total=h+e+m+s+san+sst;
        per= total/6;
//DIVISION CALCULATION
        if(per>=60)
        div="Ist";
        else if(per>=48)
        div="IInd";
        else if(per>=34)
        div="IIIrd";
        else
        div="FAIL !!";
//CLEARING SCREEN
        system("CLS");
//PRODUCING MARKSHEET
        if(board=='R')
        {    
            cout<<"\t\t\t\t\tRAJASTHAN BOARD AJMER\n";
            cout<<"\t\t\t\t\t---------------------\n\n";
        }
        else
        {
            cout<<"\t\t\t\t\tCENTRAL BOARD DELHI\n";
            cout<<"\t\t\t\t\t---------------------\n\n";   
        }
        cout<<"\t\t\tMARKSHEET"<<endl;
        cout<<"\t\t\t---------"<<endl;
        cout<<"Name:            "<<name<<"\n";
        cout<<"Father Name:     "<<fname<<"\n";
        cout<<"Branch:          "<<cls<<"\n";
        cout<<"Roll No.:        "<<roll_no<<"\n";
        cout<<"----------------------------------------------\n";
        cout<<"  SUBJECT \t"<<"MAX MARKS\t"<<"MARKS OBTAINED"<<"\n";
        cout<<"----------------------------------------------\n\n";
        cout<<" Hindi    \t   100"<<"\t\t       "<<h<<"\n";
        cout<<" English  \t   100"<<"\t\t       "<<e<<"\n";
        cout<<" Maths    \t   100"<<"\t\t       "<<m<<"\n";
        cout<<" SST      \t   100"<<"\t\t       "<<sst<<"\n";
        cout<<" Sanskrit \t   100"<<"\t\t       "<<san<<"\n";
        cout<<" Science  \t   100"<<"\t\t       "<<s<<"\n";
        cout<<"----------------------------------------------\n\n";
        cout<<"Total Marks: "<<total<<"/600\n";
        cout<<"Persentage: "<<per<<"\n";
        cout<<"Division: "<<div<<"\n";

        if(div!="FAIL !!")
        cout<<"Congratulation !!";
        else
        cout<<"Better luck next time...";

    }   
default:
    break;
}

}
