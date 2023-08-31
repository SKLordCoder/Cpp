#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    int fn()
    {
        cout << "Hello I am From Class A";
    }
};
class B
{
    int a, b;

public:
    int fn()
    {
        cout << "Hello I am From Class B";
    }
};
class C : public A, public B
{
    int a, b;

public:
    int fn()
    {
        cout << "Hello I am From Class C";
    }
};

int main()
{
    C obj;
    B obj1;
    obj.fn();
}