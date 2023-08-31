#include <iostream>
using namespace std;
class calculator
{
    int a, b, c;

public:
    int add(int x, int y)
    {
        a = x;
        b = y;
        return (a + b);
    }
    int sub(int x, int y)
    {
        a = x;
        b = y;
        return (a - b);
    }
    int Div(int x, int y)
    {
        a = x;
        b = y;
        return (a / b);
    }
    int Mul(int x, int y)
    {
        a = x;
        b = y;
        return (a * b);
    }
};
int main()
{
    calculator ad;
    int a, b, choice;
    cout << "Enter a Number = ";
    cin >> a;
    cout << "Enter another Number = ";
    cin >> b;
    cout << "What Do You Want To Do:-\n"
            "1) Addition\n"
            "2) Subtraction\n"
            "3) Divide\n"
            "4) Multiply\n=";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Addition = " << ad.add(a, b);
    }
    else if (choice == 2)
    {
        cout << "Subtraction = " << ad.sub(a, b);
    }
    else if (choice == 3)
    {
        cout << "Division = " << ad.Div(a, b);
    }
    else if (choice == 4)
    {
        cout << "Multiplication = " << ad.Mul(a, b);
    }
}