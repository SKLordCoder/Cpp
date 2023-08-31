#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter A Number = ";
    cin>>a;
    cout<<"Enter Another Number = ";
    cin>>b;

    if (a>b){
        cout<<a<<" is Greater than "<<b;}
    else if (b>a){ 
        cout<<b<<" is Greater than "<<a;   
    }
}