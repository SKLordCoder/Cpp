#include <iostream>
using namespace std;

int main()
{
    int i,a;
    long F = 1.0;
    cout<<"Enter a Number That You Want a factorial = ";
    cin>>a;
    for (i = 1; i <= a; i++)
    {
        F *= i;
    }
    cout<<"Factorial of "<<a<<" = "<<F;
}