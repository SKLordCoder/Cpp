#include <iostream>
using namespace std;

int main()
{
    int a, b, *aptr = &a, *bptr = &b, c;
    cout << "Enter a Number = ";
    cin >> a;
    cout << "Enter a Number = ";
    cin >> b;
    cout << "First Number Before Swaping = " << a << endl;
    cout << "Second Number Before Swaping = " << b << "\n\n";
    c = *aptr;
    a = b;
    b = c;
    cout << "First Number After Swaping = " << a << endl;
    cout << "Second Number After Swaping = " << b << endl;
}