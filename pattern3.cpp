#include <iostream>
using namespace std;

int main()
{
    int r = 1, a;
    int i;
    for (i = 1; i <= 5; i++)
    {
        for (a = 1; a <= i; a++)
        {
            cout << char(a+64);
        }
        cout << "\n";
    }
}
