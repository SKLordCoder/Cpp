#include <iostream>
using namespace std;

int main()
{
    int i, r, a = 1, b;
    for (i = 5; i >= 1; i--)
    {
        for (r = 1; r <= i; r++)
        {
            cout << a << " ";
        }
        cout << endl;
        a++;
    }
}