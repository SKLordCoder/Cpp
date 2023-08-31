#include <iostream>
using namespace std;
int main()
{
    int n, odd = 0, even = 0, j = 1, r, m;
    int oddeven[50][50];
    cout << "Enter Rows of Array= ";
    cin >> m;
    cout << "Enter Columns of Array= ";
    cin >> n;
    cout << "Size of Array = " << m * n << endl;
    for (r = 0; r < m; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout << "Enter a Number = ";
            cin >> oddeven[r][c];
            if (oddeven[r][c] % 2 == 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
    }
    cout << "Count of Even Numbers = " << even;
    cout << "\nCount of odd Numbers = " << odd;
}