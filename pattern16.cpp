#include <iostream>
using namespace std;

int main()
{
    int i, r, a = 1;
    for (i = 1; i <= 5; i++)
    {
        for (r = 5; r >= a; r--)
        {
            cout << r << " ";
        }
        a++;
        cout << "\n";
    }
}