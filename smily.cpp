#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    char a = 177;
    int b = 1, c = 1;
    system("CLS");
    cout << "\n";
    for (int i = 1; i <= 2; i++)
    {
        for (int k = 9; k >= b; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << a;
        }
        for (int l = i; l >= 2; l--)
        {
            cout << a;
        }
        for (int k = 5; k >= c; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << a;
        }
        for (int l = i; l >= 2; l--)
        {
            cout << a;
        }
        b++;
        c++;
        c++;
        cout << "\n";
    }
    b = 1;
    c = 9;
    cout << "\n";
    cout << "\t    " << char(3);
    cout << "\n\n";
    cout << "\t  ";
    for (int i = 1; i <= 5; i++)
    {
        cout << char(22);
    }
    cout << "\n";
    cout << " ";
}