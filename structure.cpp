#include <iostream>
using namespace std;
struct var1
{
    int a;
    char b;
    float c;
};
int main()
{
    struct var1 v1 = {1, 'c', 2.5};
    cout << v1.a << "\n";
    cout << v1.b << "\n";
    cout << v1.c << "\n";
}