#include <iostream>
using namespace std;

int main()
{
	int i, sum = 0, a;
	cout << "Enter a Number:= ";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	cout << "The sum of numbers from 1 to " << a << ":- " << sum;
}