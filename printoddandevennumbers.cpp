#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    cout << "Enter a Number= ";
    cin >> a;
    cout << "\nEven Numbers:-\n";
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            cout << "\n== " << i << " == ";
        }
    }
    cout << "\nodd Numbers:-\n";
    for (i = 1; i <= a; i++)
    {

        if (i % 2 != 0)
        {
            cout << "\n== " << i << " == ";
        }
    }
}