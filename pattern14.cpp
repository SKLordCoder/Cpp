#include <iostream>
using namespace std;

int main()
{
    int i, r = 5;
    char b = 97;
    for (b >= 97; b <= 111;)
    {
        for (i = 1; i <= r; i++)
        {
            cout << b << " ";
            b++;
        }
        r--;
        cout << "\n";
    }
}