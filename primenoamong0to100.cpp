#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter Range Where To Print Prime Numbers = ";
    cin >> a;
    cout << 2 << "\n"
         << 3 << "\n";
    for (int i = 2; i <= a; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                break;
            else if (j + 1 > sqrt(i))
            {
                cout << i << " " << endl;
            }
        }
    }
}