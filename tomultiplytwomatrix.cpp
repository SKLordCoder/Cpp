#include <iostream>
using namespace std;
int main()
{
    int k = 1, sum;
    int arr[3][3], ar[3][3], a[3][3];
    cout << "Size of Matrix = 3*3 =" << 3 * 3;
    cout << "\n------:Enter Elements of First Matrix:------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        
        {
            cout << "Enter (" << i + 1 << "," << j + 1 << ") Element = ";
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
            cout << "Enter (" << n + 1 << "," << m + 1 << ") Element = ";
            cin >> ar[n][m];
            k++;
        }
    }
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            sum = 0;
            for (int l = 0; l < 3; l++)
            {
                sum = sum + arr[r][l] * ar[l][c];
            }
            a[r][c] = sum;
        }
        cout << "\n";
    }
    cout << "\nMultiplied Matrix\n";
    for (int u = 0; u < 3; u++)
    {
        for (int v = 0; v < 3; v++)
        {
            cout << a[u][v] << "  ";
        }
        cout << "\n";
    }
}