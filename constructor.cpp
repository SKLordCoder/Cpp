#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
class Test
{
public:
    int a;
    static int b;
    Test()
    {
        a = 0;
        b++;
    }
    Test(int x)
    {
        a = x;
        b++;
    }
    Test(Test &T)
    {
        a = T.a;
    }
    int Geta()
    {
        return a;
    }
    static int Getb()
    {
        cout << b;
    }
};
int Test::b;
int main()
{
    int c, d;
    Test obj1;
    c = obj1.Geta();
    d = Test::Getb();
    cout << "a = " << c << endl;
    cout << "b = " << d;
}
