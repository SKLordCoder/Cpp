#include <iostream>
using namespace std;
class B;
class A
{
public:
    int a, b;
    A()
    {
        a = 10;
        b = 20;
    }
    friend int operator-(A &T);
    void print()
    {
        cout << a << "\n"
             << b;
    }
};
int operator-(A &T)
{
    A s;
    T.a = -T.a;
    T.b = -T.b;
}
int main()
{
    A obj1;
    -obj1;
    obj1.print();
}
