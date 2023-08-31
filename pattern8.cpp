#include <iostream>
using namespace std;

int main()
{
    int r = 1, a;
    int i;
    string b = "    ";
    for (i = 1; i <= 4; i++)
    {
        cout << b;
        for (a = 1; a <= i; a++)
        {
            cout << char(a + 96);
        }
        b.pop_back();
        cout << "\n";
    }
}
