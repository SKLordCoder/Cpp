#include <iostream>
using namespace std;

int main()
{
    int i, a;
    long long sum = 0, f = 1;
    cout << "Enter a Number = ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        f = f * i;
        sum = sum + f;
    }
    cout << sum;
}