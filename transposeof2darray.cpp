#include <iostream>
using namespace std;
int main()
{
    int c, r, Elements, i, j;
    cout << "Rows of Array = ";
    cin >> r;
    cout << "Columns of Array = ";
    cin >> c;
    cout << "Size of Array = " << r * c << "\n";
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter Elements of Matrix = ";
            cin >> arr[i][j];
        }
    }
    i = 0;
    j = 0;
    cout << "\nBefore Transpose:-\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "arr[" << i << "," << j << "] = " << arr[i][j] << "\n";
        }
    }
    i = 0;
    j = 0;
    cout << "\nAfter Transpose :-\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "arr[" << j << "," << i << "] = " << arr[i][j] << "\n";
        }
    }
}