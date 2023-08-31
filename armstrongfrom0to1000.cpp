#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int a = 1, temp, i, sum = 0, c, e;
    double b, d = 0;
    cout << "Enter Number Till You Want To Print Armstrong No.=";
    cin >> e;
    for (i = 1; i <= e; i++)
    {
        d = 0;
        sum = 0;
        temp = a;
        while (a > 0)
        {
            a = a / 10;
            d++;
        }
        a = temp;
        while (a > 0)
        {
            b = a % 10;
            sum = sum + pow(b, d);
            a = a / 10;
            // pow(3,2) = 9
        }
        if (sum == temp)
        {
            cout << temp << "\n";
        }
        // if (temp == 153)
        // {
        //   cout << temp << "\n";
        //}
        a = temp;
        a++;
    }
}