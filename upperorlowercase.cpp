#include <iostream>
using namespace std;

int main(){
    char a;
    cout<<"To Check The Character is in Uppercase And Lowercase:-\nEnter a Character = ";
    cin>>a;

    if (isupper(a)){
        cout<<a<<" is Uppercase";
    }
    else{
        cout<<a<<" is Lowercase";
    }

}