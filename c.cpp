#include <iostream>
using namespace std;

int main()
{
    char *Name;
    cin >> Name;
    int i = 0;
    while (Name != '\0')
    {
        cout << Name[0] << "\n";
        *Name++;
    }
}