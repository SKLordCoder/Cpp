#include <iostream>
using namespace std;

int main()
{
    int i, a = 1, c = 1, b, j,input = 1;
    for (j = 1; j <= 5; j++)
    {
        for (i = 1; i <= 5; i++)
        {
            b = i * input;
            cout << b << " ";
        }
        input++;
        cout << "\n";
    }
}
