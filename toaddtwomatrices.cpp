#include <iostream>
using namespace std;
int main()
{
    int k = 1;
    int arr[3][3], ar[3][3], a[3][3];
    cout << "Size of Array = " << 3 * 3;
    cout << "\n------:Enter Elements of First Matrix:------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter " << k << " Element = ";
            cin >> arr[i][j];
            k++;
        }
    }
    k = 1;
    cout << "\n------:Enter Elements of Second Matrix:------\n";
    for (int n = 0; n < 3; n++)
    {
        for (int m = 0; m < 3; m++)
        {
            cout << "Enter " << k << " Element = ";
            cin >> ar[n][m];
            k++;
        }
    }
    for (int g = 0; g < 3; g++)
    {
        for (int h = 0; h < 3; h++)
        {
            a[g][h] = arr[g][h] + ar[g][h];
            cout << a[g][h] << "  ";
        }
        cout << "\n";
    }
}