#include <iostream>
using namespace std;

int main()
{
    int i, r, a = 1;
    for (i = 1; i <= 4; i++)
    {
        for (r = 1; r <= i; r++)
        {
            cout << a << " ";
            if (a == 1)
            {
                a--;
            }
            else
            {
                a++;
            }
        }
        cout << endl;
    }
}