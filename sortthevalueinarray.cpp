#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array= ";
    cin >> n;
    int arr[n];
    for (int k = 0; k <= n; k++)
    {
        cout << "Element " << k << " of Array = ";
        cin >> arr[k];
    }
    int b;
    b = n;
    while (b != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        b--;
    }
    for (int j = 0; j <= n; j++)
    {
        cout << arr[j] << " ";
    }
}