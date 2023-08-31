#include <iostream>
using namespace std;

class A
{
public:
    int a, b;

    A()
    {
        a = 10;
        b = 20;
    }
    // Function Overloading Part
    void f1(int a, int b)
    {
        cout << "Addition of A+B = " << a + b << endl;
    }
    void f1(int a, int b, int c)
    {
        cout << "Addition of A+B+C = " << a + b + c << endl;
    }
    void f1(int a, int b, int c, int d)
    {
        cout << "Addition of A+B+C+D = " << a + b + c + d << endl;
    }
    // Operator Overloading Part
    void operator-(A &T)
    {
        a = T.a - a;
        b = T.b - b;
    }
    void Display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
    // Virtual Function part
    int fn()
    {
        cout << "Hello I am From Class A";
    }
};
class B : public A
{
    int a, b;

public:
    int fn()
    {
        cout << "Hello I am From Class B";
    }
};

int main()
{
    // Function Overloading Part
    A obj1;
    obj1.f1(1, 2);
    obj1.f1(1, 2, 3);
    obj1.f1(1, 2, 3, 4);
    // Operator Overloading Part
    A obj2;
    obj2.Display();
    obj2.a = 20;
    obj2.b = 200;

    A obj3;
    obj3 - obj2;
    obj3.Display();
    // Virtual Function part
    A obj4;
    B obj5;
    obj4.fn();
    obj5.fn();
}