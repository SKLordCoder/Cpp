#include <iostream>
using namespace std;

int main()
{
    int a, num, sumo = 0, sume = 0;
    cout << "Enter a Number= ";
    cin >> num;
    num = abs(num);
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        if (a % 2 != 0)
        {
            sumo = sumo + a;
        }
        else
        {
            sume = sume + a;
        }
    }

    cout << "Sum of odd is " << sumo << " Sum of Even is " << sume;
}