#include <iostream>
using namespace std;

int main()
{
    int i, input, b;
    cout << "Enter a Number:= ";
    cin >> input;
    for (i = 1; i <= 10; i++)
    {
        b = i * input;
        cout << input << "x" << i << "=" << b << "\n";
    }
}