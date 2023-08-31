#include <iostream>
using namespace std;

int main()
{
    int i;
    long long a;
    float c=1;
    cout<<"Enter A Number = ";
    cin>>a;
    for (i=1;i<=a;i++)
    {
        a = a/10;
        c++;
    }
    cout<<c;
}