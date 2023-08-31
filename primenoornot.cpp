#include <iostream>
using namespace std;
int main()
{
    int a, b, i;
    bool num = true;
    cout << "Enter a Number = ";
    cin >> a;
    b = a / 2;
    if (a == 0 || a == 1)
    {
        cout << "Not a Prime No.";
    }
    if (a == 2)
    {
        cout << "Prime No.";
    }
    else
    {
        i = 2;
        while (i <= b)
        {
            if (a % 2 == 0)
            {
                num = false;
            }
            i++;
        }
    }
    if (num == true)
    {
        cout << "Prime No.";
    }
    else
    {
        cout << "Not a Prime No.";
    }
}