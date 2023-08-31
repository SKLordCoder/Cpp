#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (i = 0; i < 255; i++)
    {
        cout << i << "  " << char(i) << "\n";
    }
}