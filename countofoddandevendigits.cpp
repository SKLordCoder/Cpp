#include <iostream>
using namespace std;

int main()
{
    int i, a, b = 0, c = 0, d = 0;
    cout << "Enter a Number:=";
    cin >> a;
    while (a > 0)
    {
        if (a % 2 != 0)
        {
            d++;
        }
        if (a % 2 == 0)
        {
            c++;
        }
        a = a / 10;
    }
    cout << "Odd Numbers =" << d << "\nEven Numbers =" << c;
}