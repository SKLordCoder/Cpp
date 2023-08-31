#include<iostream>
using namespace std;

int main(){
    
    int DoB,Choice;
    string Name;
    float Hindi,English,Math,Science,SSt,Computer,Percentage,PCalulate,Numbers;
    cout<<"----:Creating 10th Marksheet:----\n";
    cout<<"\nEnter Your Name = ";
    cin>>Name;
    cout<<"\nEnter Your DoB = ";
    cin>>DoB;
    cout<<"Do You Want Marksheet By Your:-\n1)Marks\n2)Percentage\n= ";
    cin>>Choice;
    if (Choice==1){
        cout<<"Enter Your Hindi Subject Numbers = ";
        cin>>Hindi;
        cout<<"Enter Your English Subject Numbers = ";
        cin>>English;
        cout<<"Enter Your Math Subject Numbers = ";
        cin>>Math;
        cout<<"Enter Your Science Subject Numbers = ";
        cin>>Science;
        cout<<"Enter Your SSt Subject Numbers = ";
        cin>>SSt;
        cout<<"Enter Your Computer Subject Numbers = ";
        cin>>Computer;
        Numbers = Hindi+English+Math+Science+SSt+Computer;
        PCalulate = 100*Numbers/600;
    
        if (Hindi<33){
        cout<<"You failed Because You Have Got Less Than 33 In Hindi or Maybe Other Subjects";
        }
        else if (English<33){
            cout<<"You failed Because You Have Got Less Than 33 In English or Maybe Other Subjects";
        }
        else if (Math<33){
            cout<<"You failed Because You Have Got Less Than 33 In Math or Maybe Other Subjects";
        }
        else if (Science<33){
            cout<<"You failed Because You Have Got Less Than 33 In Science or Maybe Other Subjects";
        }
        else if (SSt<33){
            cout<<"You failed Because You Have Got Less Than 33 In SSt or Maybe Other Subjects";
        }
        else if (Computer<33){
            cout<<"You failed Because You Have Got Less Than 33 In Computer or Maybe Other Subjects";
        }}
    else if (Choice==2){
        cout<<"Enter The Percentage You Obtained = ";
        cin>>Percentage;
        PCalulate = Percentage;}
    if (PCalulate>=60){
    cout<<"Congratulations!"<<Name<<" You Got 1st Division With "<<PCalulate<<" Percentage";
    }
    if (PCalulate>=46 && PCalulate<=59){
        cout<<"Congratulations!"<<Name<<" You Got 2nd Division With "<<PCalulate<<" Percentage";
    }
    if (PCalulate>=33 && PCalulate<=45){
        cout<<"Congratulations!"<<Name<<" You Got 3nd Division With "<<PCalulate<<" Percentage";
    }
    if (PCalulate<=33){
        cout<<"Sorry"<<Name<<" You Failed The Exam With "<<PCalulate<<" Percentage. Better Luck Next Time";
    }  
}