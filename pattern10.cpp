#include <iostream>
using namespace std;

int main()
{
    int i;
    char a = 65, b = 97;
    for (i = 1; i <= 5; i++)
    {
        a = 65;
        b = 97;
        for (a >= 65; a <= 69 && b >= 97; b <= 101)
        {
            cout << a << b << " ";
            a++;
            b++;
        }
        cout << "\n";
    }
}