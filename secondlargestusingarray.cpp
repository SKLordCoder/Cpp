#include <iostream>
using namespace std;
int main()
{
    int n, Max = 0, Smax = 0;
    cout << "Size of Array= ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a Number = ";
        cin >> arr[i];
        if (Max < arr[i])
        {
            Max = arr[i];
        }
        if (Smax == Max)
        {
            continue;
        }
        else
        {
            Smax = arr[i];
        }
    }
    cout << "Max = " << Max << endl;
    cout << "Smax = " << Smax;
}