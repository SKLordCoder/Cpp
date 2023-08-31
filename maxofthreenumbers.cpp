#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter A Number = ";
    cin>>a;
    cout<<"Enter Another Number = ";
    cin>>b;
    cout<<"Enter Another Number = ";
    cin>>c;

    if (a>b){
        if(a>c){
            cout<<a<<" is Greater than "<<b<<" and "<<c; 
            }}
    else if (b>a){ 
        if (b>c){
            cout<<b<<" is Greater than "<<a<<" and "<<c;
            }}
    else{
        cout<<c<<" is Greater than "<<a<<" and "<<b;
    }
}