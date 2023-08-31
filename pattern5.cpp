#include <iostream>
using namespace std;

int main()
{

    int i, r, a = 1, b;
    for (i = 1; i <= 4; i++)
    {
        for (r = 1; r <= i; r++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}