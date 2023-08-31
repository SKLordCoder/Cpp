#include <iostream>
using namespace std;

int main()
{
    int i, input1, in;
    cout << "Enter a Number = ";
    cin >> input1;
    in = input1 / 2;
    bool num = true;
    if (input1 == 0 || input1 == 1)
    {
        num = false;
    }
    for (i = 2; i <= in; i++)
    {
        if (input1 % i == 0)
        {
            num = false;
            break;
        }
    }
    if (num)
    {
        cout << "It is a Prime Number";
    }
    else
    {
        cout << "it is not a prime number";
    }
}