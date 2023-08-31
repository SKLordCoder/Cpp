#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    cout << "Enter the rows of the matrix: ";
    cin >> a;
    cout << "Enter the column of the matrix: ";
    cin >> b;
    int ar[a][b];
    int arr[a][b];
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << "Enter the value of the (" << x + 1 << "x" << y + 1 << ") is =";
            cin >> ar[x][y];
        }
    }
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << "Enter the value of the (" << x + 1 << "x" << y + 1 << ") is =";
            cin >> arr[x][y];
        }
    }
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << ar[x][y] << " ";
        }
        cout << endl;
    }
    cout << "+" << endl;
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    cout << "=" << endl;
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << arr[x][y] + ar[x][y] << "  ";
        }
        cout << endl;
    }
}