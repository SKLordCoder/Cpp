#include <iostream>
using namespace std;

int main(){

    int Choice;
    float a,b;
while (true){
    cout<<"\nEnter a Number = ";
    cin>>a;
    cout<<"Enter another Number = ";
    cin>>b;

    cout<<"What Would You Want To Do:-\n1) Addition \n2) Subtraction\n3) Divide\n4) Multiply\n = ";
    cin>>Choice;

    if (Choice==1){
        cout<<"The Addition of Entered Numbers is = "<<a+b;
    }
    
    if (Choice==2){
        cout<<"The Subtraction of Entered Numbers is = "<<a-b;
    }
    
    if (Choice==3){
        cout<<"The Divide of Entered Numbers is = "<<a/b;
    }
    
    if (Choice==4){
        cout<<"The Multiply of Entered Numbers is = "<<a*b;
    }
}
}