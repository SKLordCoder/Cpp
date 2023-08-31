#include <iostream>
using namespace std;

int main()
{
    int a, b, temp, sum = 0;
    cout << "Enter a Number= ";
    cin >> a;
    for (temp = a; a != 0; a = a / 10)
    {
        b = a % 10;
        sum = sum + (b * b * b);
    }
    if (sum == temp)
    {
        cout << "is Armstrong";
    }
    else
    {
        cout << "not Armstrong";
    }
}