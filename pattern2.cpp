#include <iostream>
using namespace std;

int main()
{
    int i, r;
    for (i = 1; i <= 5; i++)
    {
        for (r = 1; r <= i; r++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}