#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 1, sum = 0;
    system("cls");
    cout << "Enter Number Till You Want to Sum:=";
    cin >> n;
    int num[n];
    while (num[i] != num[n])
    {
        sum = sum + j;
        i++;
        j++;
    }
    cout << "Sum = " << sum;
}