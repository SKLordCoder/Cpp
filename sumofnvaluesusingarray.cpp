#include <iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int r, c, sum = 0;
    cout << "Rows in Array = ";
    cin >> r;
    cout << "Columns in Array = ";
    cin >> c;
    cout << "Size of Array = " << r * c << endl;

    for (int m = 0; m < r; m++)
    {
        for (int n = 0; n < c; n++)
        {
            cout << "Enter a Number = ";
            cin >> arr[r][c];
            sum = sum + arr[r][c];
        }
    }
    cout << "Sum of Elements in Array = " << sum;
}