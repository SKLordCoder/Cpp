#include <iostream>
using namespace std;
int main()
{
    int i, n = 0, b = 100000000, a;
    cout << "Enter Lenght of Array:- ";
    cin >> n;
    int maxarr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter a Number:- ";
        cin >> maxarr[i];
        if (maxarr[i] <= b)
        {
            b = maxarr[i];
        }
        else
        {
            continue;
        }
    }
    cout << b;
}