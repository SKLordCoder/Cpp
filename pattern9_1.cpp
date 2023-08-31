#include <iostream>
using namespace std;
int main()
{
    int a = 1, c = 0;
    string b = "    ";
    for (int i = 1; i <= 4; i++)
    {
        cout << b;
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == 3)
                cout << a;
            else
                cout << c;
        }
        cout << "\n";
        b.pop_back();
    }
}