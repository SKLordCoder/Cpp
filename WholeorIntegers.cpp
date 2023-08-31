#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"To Check The Number is Whole no or Integer :-\nEnter a Number = ";
    cin>>a;
    
    if (a>=0){
        cout<<a<<" is Whole Number as well as a Integer";
    }
    else if(a<=0){
        cout<<a<<" is Integer Number";
    }

}