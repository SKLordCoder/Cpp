#include <iostream>
using namespace std;

int main()
{
    int a, i, reminder, reverse = 0;
    cout << "Enter a Number= ";
    cin >> a;
    while (a != 0)
    {
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
        a = a / 10;
    }
    cout << reverse;
}