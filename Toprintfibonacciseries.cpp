#include <iostream>
using namespace std;

int main()
{
    float i, e1, e2, c = 0, terms;
    e1 = 0;
    e2 = 1;
    cout << "Enter Number of Terms = ";
    cin >> terms;
    cout << e1 << "\n";
    for (i = 1; i <= terms; i++)
    {
        if (i == 1)
        {
            cout << "";
            continue;
        }
        if (i == 2)
        {
            cout << e2 << "\n";
            continue;
        }
        c = e1 + e2;
        e1 = e2;
        e2 = c;
        cout << c << "\n";
    }
}