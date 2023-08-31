#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, a;
    cout<<"Enter a Number = ";
    cin>>num;
    while (num > 0)
    {
        a = num%10;
        sum = sum + a;
        num = num/10;
    }
    cout<<"The Sum is "<<sum;
}