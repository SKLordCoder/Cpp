#include <iostream>
using namespace std;

int main()
{
    int i, j, k, a, b = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << b;
        }
        for (a = 1; a < i; a++)
        {
            cout << b;
        }
        b++;
        cout << "\n";
    }
}