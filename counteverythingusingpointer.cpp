#include <iostream>
using namespace std;
int main()
{
    int a, c, d, n = 0, M = 0, i = 0, char1 = 0, space = 0, k = 33, sym = 0, upper = 0, lowr = 0, Words = 0;
    int Digit = 0;
    int *b = &a;
    char ar[] = "Hello Everyone..;; Num=12344576";
    char *arr = ar;
    while (arr[n] != '\0')
    {
        M++;
        if (isdigit(arr[n]))
        {
            Digit++;
        }
        if (isalpha(arr[n]))
        {
            char1++;
        }

        if (isspace(arr[n]))
        {
            space++;
        }
        i = 0;
        for (k = 33; k <= 47; k++)
        {
            if (arr[n] == char(k))
            {
                sym++;
            }
        }
        for (int b = 58; b <= 64; b++)
        {
            if (arr[n] == char(b))
            {
                sym++;
            }
        }
        for (int u = 91; u <= 96; u++)
        {
            if (arr[n] == char(u))
            {
                sym++;
            }
        }
        for (int v = 123; v <= 126; v++)
        {
            if (arr[n] == char(v))
            {
                sym++;
            }
        }

        a = 65;
        for (a = 65; a <= 90; a++)
        {
            if (arr[n] == char(a))
                upper++;
        }

        a = 97;
        for (a = 97; a <= 122; a++)
        {
            if (arr[n] == char(a))
                lowr++;
        }
        if (arr[n] == char(32))
        {
            Words++;
        }
        n++;
    }
    cout << "Total Lenght = " << M;
    cout << "\nSpaces = " << space;
    cout << "\nTotal Symbols = " << sym;
    cout << "\nUpper case Alphabets = " << upper;
    cout << "\nLower case Alphabets = " << lowr;
    cout << "\nAlphabets = " << char1;
    cout << "\nDigits = " << Digit;
    cout << "\nTotal Words = " << Words + 1;
}