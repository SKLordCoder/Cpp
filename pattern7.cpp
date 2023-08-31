#include <iostream>
using namespace std;

int main()
{
    int i, r;
    int b = 1;
    for (i = 1; i <= 5; i++)
    {
        for (b = 5; b >= i; b--)
            cout << " ";
        for (r = 1; r <= i; r++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}