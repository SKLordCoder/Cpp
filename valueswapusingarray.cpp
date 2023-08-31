#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your First no.:";
    cin >> a;
    cout << "Enter your Second no.:";
    cin >> b;
    int *d = &a;
    cout << "before swaping\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    c = b;
    b = a;
    *d = c;
    cout << "After swaping \n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
}