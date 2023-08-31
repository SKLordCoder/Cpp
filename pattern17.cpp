#include <iostream>
using namespace std;

int main()
{
    int i, k = 9, j, r, a = 1;
    string b = "        ";
    for (i = 1; i <= 5; i++)
    {
        for (j = k; j >= 1; j--)
        {
            cout << " ";
        }
        k--;
        k--;
        for (r = 1; r <= a; r++)
        {
            cout << "* ";
        }
        a++;
        a++;
        cout << "\n";
    }
}