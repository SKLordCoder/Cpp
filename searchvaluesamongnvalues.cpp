#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, b, j;
    cout << "Enter Range of Array = ";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << i << " ";
        cout << "Enter a Number = ";
        cin >> a[i];
    }
    cout << "What do You Want To Search = ";
    cin >> b;
    for (j = 0; j < n; j++)
    {
        if (b == a[j])
        {
            cout << "Found at = " << j << " Element = " << a[j] << "\n";
        }
    }
    if (b != a[0, n])
    {
        cout << "Not Found";
    }
}