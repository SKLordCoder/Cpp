#include <iostream>
using namespace std;

int main(){

    int Choice;
    float Seconds,Hours,Minutes;
while (true){
    cout<<"\nWhat Would You Want To Do:-\n1) Hours To Minutes \n2) Hours To Seconds\n3)Minutes To Hours\n4)Minutes to Seconds\n5)Seconds To Hours\n6)Seconds To Minutes\n = ";
    cin>>Choice;

    if (Choice==1){
        cout<<"Enter The Hours To Convert Into Minutes = ";
        cin>>Hours;
        cout<<Hours<<" Hours in Minutes is "<<Hours*60;
    }
    else if (Choice==2){
        cout<<"Enter The Hours To Convert Into Seconds = ";
        cin>>Hours;
        cout<<Hours<<" Hours in Seconds is "<<Hours*3600;
    }
    else if (Choice==3){
        cout<<"Enter The Minutes To Convert Into Hours = ";
        cin>>Minutes;
        cout<<Minutes<<" Minutes in Hours is "<<Minutes/60;
    }
    else if (Choice==4){
        cout<<"Enter The Minutes To Convert Into Seconds = ";
        cin>>Minutes;
        cout<<Minutes<<" Minutes in Seconds is "<<Minutes*60;
    }
    else if (Choice==5){
        cout<<"Enter The Seconds To Convert Into Hours = ";
        cin>>Seconds;
        cout<<Seconds<<" Seconds in Hours is "<<Seconds/3600;
    }
    else if (Choice==6){
        cout<<"Enter The Seconds To Convert Into Minutes = ";
        cin>>Seconds;
        cout<<Seconds<<" Seconds in Minutes is "<<Seconds/60;
    }
    else{
        cout<<"Sorry You Entered A Wrong Input";
    }
}
}