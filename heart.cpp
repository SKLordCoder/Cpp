#include <iostream>
using namespace std;
int main()
{
    char a = 3;
    int b = 1, c = 1;

    for (int i = 1; i <= 3; i++)
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
    for (int i = 6; i >= 1; i--)
    {
        for (int k = 15; k >= c; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << a;
        }
        for (int k = i; k >= 2; k--)
        {
            cout << a;
        }
        cout << "\n";
        c--;
        b++;
    }
}