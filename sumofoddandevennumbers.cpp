#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    int sum = 0;
    cout << "Enter a Number= ";
    cin >> a;
    cout << "\nEven Numbers:-\n";
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << "\n";
    cout << "\nodd Numbers:-\n";
    sum = 0;
    for (i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;
}