#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r,h;
    float a,l;
    cout<<"Enter the radius of a cone to know its area:-";
    cin>>r;
    cout<<"Enter the lenght of a cone to know its area:-";
    cin>>h;
    l = sqrt(r*r+h*h); 

    a = 3.14*r*l+3.14*r*r;

    cout<<a;
    return 0;
}