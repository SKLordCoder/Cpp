#include <iostream>
using namespace std;
union var1
{
    int a;
    char b;
    float c;
};
int main()
{
    union var1 v1 = {3};
    cout << v1.a << "\n";
    cout << v1.b << "\n";
    cout << v1.c << "\n";
}