#include <iostream>
using namespace std;

int main()
{
    int i , a, Even=0, b = 0,Odd=0;
    cout << "Enter a Number = ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            cout << "\n" << i;
            Even++;
        }
    }
    cout <<"\nTotal Even no is "<< Even;
    cout<<"\n";
    for (i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            cout << "\n" << i;
            Odd++;
        }
    }
    
    cout << "\nTotal Odd no is "<< Odd;
}