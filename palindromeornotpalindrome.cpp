#include <iostream>
using namespace std;

int main()
{
    int i, a, b, reverse = 0, reminder;
    cout << "Enter a Number = ";
    cin >> a;
    b = a;
    while (a != 0)
    {
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
        a = a / 10;
    }
    if (b == reverse)
    {
        cout << "It is Palindrome Number.";
    }
    else
    {
        cout << "It is Not a Palindrome Number.";
    }
}
