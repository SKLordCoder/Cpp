#include <iostream>
using namespace std;
int main() // 33//47//58//64
{
    int M = 0, i = 0, A = 0, k = 65, l = 97, s = 0;
    char a[40] = "Hello I Am Salmam. Num=123432123\0";
    while (a[i] != '\0')
    {
        M++;
        i++;
    }
    cout << "Total Lenght = " << M;
    for (int j = 0; j <= M; j++)
    {
        for (k = 65; k <= 90; k++)
        {
            if (a[j] == char(k))
            {
                A++;
            }
        }
        for (int n = 97; n <= 122; n++)
        {
            if (a[j] == char(n))
            {
                A++;
            }
        }
    }
    cout << "\nTotal Alphabets = " << A;
    i = 0;
    for (i = 0; i <= M; i++)
    {
        if (a[i] == char(32))
        {
            s++;
        }
    }
    i++;
    cout << "\nSpace = " << s;
    i = 0;
    int UA = 0;
    for (i = 0; i <= M; i++)
    {
        for (k = 65; k <= 90; k++)
        {
            if (a[i] == char(k))
            {
                UA++;
            }
        }
    }
    i++;
    cout << "\nUpper Case Alphabets = " << UA;
    i = 0;
    int LA = 0;
    for (i = 0; i <= M; i++)
    {
        for (k = 97; k <= 122; k++)
        {
            if (a[i] == char(k))
            {
                LA++;
            }
        }
    }
    i++;
    cout << "\nLower Case Alphabets = " << LA;
    i = 0;
    int digit = 0;
    for (i = 0; i <= M; i++)
    {
        for (int l = 48; l <= 57; l++)
        {
            if (a[i] == char(l))
            {
                digit++;
            }
        }
    }
    i++;
    cout << "\nTotal Digits = " << digit;
    i = 0;
    k = 0;
    int sym = 0;
    while (a[i] != '\0')
    {
        for (k = 33; k <= 47; k++)
        {
            if (a[i] == char(k))
            {
                sym++;
            }
        }
        for (int b = 58; b <= 64; b++)
        {
            if (a[i] == char(b))
            {
                sym++;
            }
        }
        for (int u = 91; u <= 96; u++)
        {
            if (a[i] == char(u))
            {
                sym++;
            }
        }
        for (int v = 123; v <= 126; v++)
        {
            if (a[i] == char(v))
            {
                sym++;
            }
        }
        i++;
    }
    cout << "\nTotal Symbols = " << sym;
    i = 0;
    int Words = 0;
    for (i = 0; i <= M; i++)
    {
        if (a[i] == char(32))
        {
            Words++;
        }
    }
    Words++;
    cout << "\nTotal Words = " << Words;
}