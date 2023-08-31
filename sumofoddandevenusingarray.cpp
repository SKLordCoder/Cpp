#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, odd = 0, even = 0, j = 1, a;
    cout << "Enter The Size of Array= ";
    cin >> n;
    int oddeven[1000];
    for (i = 0; i < n; i++)
    {
        cout << "Enter a Number = ";
        cin >> oddeven[i];

        if (oddeven[i] % 2 == 0)
        {
            odd = odd + oddeven[i];
        }
        else
        {
            even = even + oddeven[i];
        }
    }
    cout << "Sum of Even Numbers = " << even;
    cout << "\nSum of odd Numbers = " << odd;
}