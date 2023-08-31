#include <iostream>
using namespace std;
int main()
{
    int i, a[100], b, c, even = 0, odd = 0;
    cout << "Enter The Size of Array:-";
    cin >> b;
    for (i = 0; i < b; i++)
    {
        cout << "Enter a Number = ";
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Odd Numbers Present In Given Values Are = " << odd << "\n";
    cout << "Even Numbers Present In Given Values Are = " << even << "\n";
}