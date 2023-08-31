#include <iostream>
using namespace std;

int main()
{
    char i, a = 97;
    i = 65;
    while (i <= 90 && a <= 122)
    {
        cout << i << " " << a << "\n";
        i++;
        a++;
    }
}