#include <iostream> //<--:Preprocessor Directory
#include <cmath>
#include <ctime>
#include <cctype>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    int a, b, choice, choice1, x = 0;
    string Name, salman1 = "===========+++++++++++++++++++++++------------------------++++++++++++++++++++++=================\n"
                           ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [ GOOD MORNING! Unknown ] <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n"
                           "===========+++++++++++------------ [ WELCOME TO THIS SOFTWARE ] ------------+++++++++++===========\n"
                           "+++++++++++++++++++++++============*** [ MADE BY Unknown ] ***================+++++++++++++++++++\n"
                           "===========+++++++++++++++++++++++------------------------++++++++++++++++++=================",
                 choices = "\nWhat Do You Want To Do:-\n"
                           "1) Find The Area of Shapes.\n"
                           "2) Time Conversion. \n"
                           "3) Use Calculator\n"
                           "4) Temprature Conversion.\n"
                           "5) Get Marksheet.\n"
                           "6) See The ASCII Value of Character.\n"
                           "7) To Get Max/Min of Entered Numbers.\n"
                           "8) Find odd or Even Number.\n"
                           "9) Find Whole or Integer Number.\n"
                           "10) Find Uppercase And Lowercase Number\n"
                           "11) To Print Something/Sum in Series.\n"
                           "12) To Show Date And Time\n"
                           "13) See that a Number is Armstrong or not\n"
                           "14) To Print Patterns \n"
                           "15) Palindrome or Not \n"
                           "16) Exit From Program\n"
                           "Choose a Option From above = ";
    ;
    cout << "Enter Your Name:- ";
    cin >> Name;
    transform(Name.begin(), Name.end(), Name.begin(), ::tolower);
    if (Name == "unknown")
    {
        system("Color 01");
        cout << "===========+++++++++++++++++++++++------------------------++++++++++++++++++++++=================\n";
        Sleep(200);
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [ GOOD MORNING! unknown "
             << " ] <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
        Sleep(200);
        cout << "===========+++++++++++------------ [ WELCOME TO THIS SOFTWARE ] ------------+++++++++++===========\n";
        Sleep(200);
        cout << "+++++++++++++++++++++++============*** [ MADE BY Unknown ] ***================+++++++++++++++++++\n"
                "===========+++++++++++++++++++++++------------------------++++++++++++++++++=================";
        Sleep(200);
    }
    else
    {
        cout << "===========+++++++++++++++++++++++------------------------++++++++++++++++++++++=================\n";
        Sleep(200);
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [ GOOD MORNING! " << Name << " ] <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
        Sleep(200);
        cout << "===========+++++++++++------------ [ WELCOME TO THIS SOFTWARE ] ------------+++++++++++===========\n";
        Sleep(200);
        cout << "+++++++++++++++++++++++============*** [ MADE BY Unknown ] ***================+++++++++++++++++++\n"
                "===========+++++++++++++++++++++++------------------------++++++++++++++++++=================";
        Sleep(200);
    }
start:
    x = 0;
    while (choices[x] != '\0')
    {
        cout << choices[x];
        Sleep(1);
        x++;
    }
    cin >> choice;

    switch (choice)
    {
    case 1: // Area of Shapes
    {
    Shapes:
        Sleep(300);
        string choices1 = "\n Which Shape Area You Want to Find:-\n1)Rectangle\n2)Sphere\n3)Square\n4)Triangle\n5)Circle\n6)Cone\n= ";
        x = 0;
        while (choices1[x] != '\0')
        {
            cout << choices1[x];
            Sleep(1);
            x++;
        }
        cin >> choice1;
        if (choice1 == 1) // Rectangle
        {
            float W, L, b, a;
            Sleep(200);
            cout << "Enter the Width of a rectangle:-";
            cin >> W;
            Sleep(200);
            cout << "Enter Length of a rectangle:-";
            cin >> L;
            a = W * L;
            cout << a;
        }
        else if (choice1 == 2) // Sphere
        {
            float a, r;
            Sleep(200);
            cout << "Enter the radius of a Sphere to know its area:-";
            cin >> r;
            a = 4 * 3.14159 * r * r;
            cout << a;
        }
        else if (choice1 == 3) // Square
        {
            float s, b, a;
            Sleep(200);
            cout << "Enter the side of a square:-";
            cin >> s;
            a = s * s;
            cout << a;
        }
        else if (choice1 == 4) // Triangle
        {
            float b, h, a;
            Sleep(200);
            cout << "Enter the base of a triangle:-";
            cin >> b;
            Sleep(200);
            cout << "Enter the Height of a triangle:-";
            cin >> h;
            a = b * h * 1 / 2;
            cout << a;
        }
        else if (choice1 == 5) // Circle
        {
            float a, r;
            Sleep(200);
            cout << "Enter the radius of a circle to know its area:-";
            cin >> r;
            a = 3.14159 * r * r;
            cout << a;
        }
        else if (choice1 == 6) // Cone
        {
            int r, h;
            float a, l;
            Sleep(200);
            cout << "Enter the radius of a cone to know its area:-";
            cin >> r;
            Sleep(200);
            cout << "Enter the lenght of a cone to know its area:-";
            cin >> h;
            l = sqrt(r * r + h * h);
            a = 3.14159 * r * l + 3.14159 * r * r;
            cout << a;
        }
        else
        {
            cout << "Wrong Input! Try Again.\n";
            goto Shapes;
        }
        break;
    }
    case 2: // Time Conversion
    {
        int choice2;
        float Seconds, Hours, Minutes;
    time:
        string choices3 = "\nWhat Would You Want To Do:-\n1) Hours To Minutes \n2) Hours To Seconds\n3)Minutes To Hours\n4)Minutes to Seconds\n5)Seconds To Hours\n6)Seconds To Minutes\n = ";
        x = 0;
        while (choices3[x] != '\0')
        {
            Sleep(1);
            cout << choices3[x];
            x++;
        }
        cin >> choice2;
        if (choice2 == 1) // Hours To Minutes
        {
            Sleep(200);
            cout << "Enter The Hours To Convert Into Minutes = ";
            cin >> Hours;
            Minutes = Hours * 60;
            Seconds = Minutes * 60;
            Sleep(200);
            cout << Hours << " Hours = " << Minutes << " Minutes = " << Seconds << " Seconds";
        }
        else if (choice2 == 2) // Hours To Seconds
        {
            Sleep(200);
            cout << "Enter The Hours To Convert Into Seconds = ";
            cin >> Hours;
            Sleep(200);
            cout << Hours << " Hours in Seconds is " << Hours * 3600;
        }
        else if (choice2 == 3) // Minutes To Hours
        {
            Sleep(200);
            cin >> Minutes;
            Sleep(200);
            cout << Minutes << " Minutes in Hours is " << Minutes / 60;
        }
        else if (choice2 == 4) // Minutes to Seconds
        {
            Sleep(200);
            cout << "Enter The Minutes To Convert Into Seconds = ";
            cin >> Minutes;
            Sleep(200);
            cout << Minutes << " Minutes in Seconds is " << Minutes * 60;
        }
        else if (choice2 == 5) // Seconds To Hours
        {
            Sleep(200);
            cout << "Enter The Seconds To Convert Into Hours = ";
            cin >> Seconds;
            Sleep(200);
            cout << Seconds << " Seconds in Hours is " << Seconds / 3600;
        }
        else if (choice2 == 6) // Seconds To Minutes
        {
            Sleep(200);
            cout << "Enter The Seconds To Convert Into Minutes = ";
            cin >> Seconds;
            Sleep(200);
            cout << Seconds << " Seconds in Minutes is " << Seconds / 60;
        }
        else
        {
            cout << "Sorry You Entered A Wrong Input\n";
            goto time;
        }
        break;
    }
    case 3: // Calculator
    {
        int Choice;
        float a, b;
        string choices4 = "\n What Would You Want To Do:-\n"
                          "1) Addition \n"
                          "2) Subtraction\n"
                          "3) Divide\n"
                          "4) Multiply\n"
                          "5) To Get Factorial of a Number\n"
                          "6) Prime Number or Not\n"
                          "7) Sum of Digits of Number\n"
                          "8) Sum of Odd and Even Digits of a Number\n"
                          "9) Count Number of Digits in a Number\n"
                          "10) Reverse of Given Number\n"
                          "Choose One From Above = ";
    calculator:
        x = 0;
        while (choices4[x] != '\0')
        {
            Sleep(1);
            cout << choices4[x];
            x++;
        }
        cin >> Choice;
        if (Choice >= 5)
        {
            goto fact;
        }
        else
        {
            cout << "\nEnter a Number = ";
            cin >> a;
            cout << "Enter another Number = ";
            cin >> b;
        }
    fact:
        if (Choice == 1) // Addition
        {
            Sleep(100);
            cout << "The Addition of Entered Numbers is = " << a + b;
        }

        else if (Choice == 2) // Subtraction
        {
            Sleep(100);
            cout << "The Subtraction of Entered Numbers is = " << a - b;
        }

        else if (Choice == 3) // Divide
        {
            Sleep(200);
            cout << "The Divide of Entered Numbers is = " << a / b;
        }

        else if (Choice == 4) // Multiply
        {
            Sleep(200);
            cout << "The Multiply of Entered Numbers is = " << a * b;
        }
        else if (Choice == 5) // To Get Factorial of a Number
        {
            Sleep(200);
            int i, a;
            float F = 1.0;
            cout << "Enter a Number That You Want a factorial = ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                F *= i;
            }
            Sleep(200);
            cout << "Factorial of " << a << " = " << F;
        }
        else if (Choice == 6) // Prime Number or Not
        {
            Sleep(200);
            int i, input1, in;
            cout << "Enter a Number = ";
            cin >> input1;
            in = input1 / 2;
            bool num = true;
            if (input1 == 0 || input1 == 1)
            {
                num = false;
            }
            for (i = 2; i <= in; i++)
            {
                if (input1 % i == 0)
                {
                    num = false;
                    break;
                }
            }
            if (num)
            {
                Sleep(200);
                cout << "It is a Prime Number";
            }
            else
            {
                Sleep(200);
                cout << "it is not a prime number";
            }
        }
        else if (Choice == 7) // Sum of Digits of Number
        {
            Sleep(200);
            int num, sum = 0, a;
            cout << "Enter a Number = ";
            cin >> num;
            while (num > 0)
            {
                a = num % 10;
                sum = sum + a;
                num = num / 10;
            }
            Sleep(200);
            cout << "The Sum is " << sum;
        }
        else if (Choice == 8) // Sum of Odd and Even Digits of a Number
        {
            Sleep(200);
            int a, num, sumo = 0, sume = 0, b;
            cout << "Enter a Number= ";
            cin >> num;
            b = num;
            num = abs(num);
            while (num > 0)
            {
                a = num % 10;
                num = num / 10;
                if (a % 2 != 0)
                {
                    sumo = sumo + a;
                }
                else
                {
                    sume = sume + a;
                }
            }
            Sleep(200);

            cout << "\nSum of odd Numbers Present in " << b << " is " << sumo << " \nSum of Even is Numbers Present in " << b << " is " << sume;
        }
        else if (Choice == 9) // Count Number of Digits in a Number
        {
            Sleep(200);
            int i;
            long long a;
            float c = 0;
            cout << "Enter A Number = ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                a = a / 10;
                c++;
            }
            Sleep(200);
            cout << c;
        }
        else if (Choice == 10)
        {
            int a, i, reminder, reverse = 0;
            cout << "Enter a Number= ";
            cin >> a;
            while (a != 0)
            {
                reminder = a % 10;
                reverse = reverse * 10 + reminder;
                a = a / 10;
            }
            cout << reverse;
        }
        else
        {
            Sleep(200);
            cout << "Wrong Input!Try Again.\n";
            goto calculator;
        }
        break;
    }
    case 4: // C to F/F to C
    {
        int choice2;
    Temp:
        Sleep(300);
        string choices5 = "\n What Do You Want To Do:-\n1)Celcius to Ferhenite\n2)Ferhenite to Celcius.\n=";
        x = 0;
        while (choices5[x] != '\0')
        {
            Sleep(1);
            cout << choices5[x];
            x++;
        }
        cin >> choice2;
        if (choice2 == 1) // Celcius to Ferhenite
        {
            Sleep(200);
            int c;
            float f;
            cout << "Enter Temprature To Convert From Celcius to Ferhanite:--";
            cin >> c;
            f = c * 1.8 + 32;
            Sleep(200);
            cout << "Temprature in ferhanite is :--" << f;
        }
        else if (choice2 == 2) // Ferhenite to Celcius.
        {
            Sleep(200);
            float F, C;
            cout << "Enter Ferhenite to Convert into Celsius = ";
            cin >> F;
            C = 5 * (F - 32) / 9;
            Sleep(200);
            cout << "Ferhanite to Celcius = " << C;
        }
        else
        {
            cout << "Wrong Input! Try Again\n";
            goto Temp;
        }
        break;
    }
    case 5: // Marksheet
    {
        Sleep(200);
        int Choice;
        string Name;
        float Hindi, English, Math, Science, SSt, Computer, Percentage, PCalculate, Numbers;
    Mark:
        cout << "----:Creating 10th Marksheet:----\n";
        Sleep(200);
        cout << "\nEnter Your Name = ";
        cin >> Name;
        Sleep(200);
        cout << "Do You Want Marksheet By Your:-\n1)Marks\n2)Percentage\n= ";
        cin >> Choice;
        Sleep(200);
        if (Choice == 1) // Marks
        {
            Sleep(300);
            cout << "Enter Your Hindi Subject Numbers = ";
            cin >> Hindi;
            Sleep(200);
            cout << "Enter Your English Subject Numbers = ";
            cin >> English;
            Sleep(200);
            cout << "Enter Your Math Subject Numbers = ";
            cin >> Math;
            Sleep(200);
            cout << "Enter Your Science Subject Numbers = ";
            cin >> Science;
            Sleep(200);
            cout << "Enter Your SSt Subject Numbers = ";
            cin >> SSt;
            Sleep(200);
            cout << "Enter Your Computer Subject Numbers = ";
            cin >> Computer;
            Sleep(200);
            Numbers = Hindi + English + Math + Science + SSt + Computer;
            PCalculate = 100 * Numbers / 600;

            if (Hindi < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In Hindi or Maybe Other Subjects";
                goto start;
            }
            else if (English < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In English or Maybe Other Subjects";
                goto start;
            }
            else if (Math < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In Math or Maybe Other Subjects";
                goto start;
            }
            else if (Science < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In Science or Maybe Other Subjects";
                goto start;
            }
            else if (SSt < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In SSt or Maybe Other Subjects";
                goto start;
            }
            else if (Computer < 33)
            {
                Sleep(200);
                cout << "You failed Because You Have Got Less Than 33 In Computer or Maybe Other Subjects";
                goto start;
            }
        }
        else if (Choice == 2) // Percentage
        {
            Sleep(300);
            cout << "Enter The Percentage You Obtained = ";
            cin >> Percentage;
            PCalculate = Percentage;
        }
        else
        {
            Sleep(200);
            cout << "Wrong Input! Try Again.\n";
            goto Mark;
        }
        if (PCalculate >= 60)
        {
            Sleep(200);
            cout << "Congratulations!" << Name << " You Got 1st Division With " << PCalculate << " Percentage";
        }
        else if (PCalculate >= 46 && PCalculate <= 59)
        {
            Sleep(200);
            cout << "Congratulations!" << Name << " You Got 2nd Division With " << PCalculate << " Percentage";
        }
        else if (PCalculate >= 33 && PCalculate <= 45)
        {
            Sleep(200);
            cout << "Congratulations!" << Name << " You Got 3nd Division With " << PCalculate << " Percentage";
        }
        else if (PCalculate <= 33)
        {
            Sleep(200);
            cout << "Sorry" << Name << " You Failed The Exam With " << PCalculate << " Percentage. Better Luck Next Time";
        }
        break;
    }
    case 6: // Ascii value of A Character
    {
        Sleep(200);
        char c;
        cout << "Enter a Character = ";
        cin >> c;
        Sleep(200);
        cout << "Ascii Value of " << c << " is " << int(c);
        break;
    }
    case 7: // Get Min Max of a Number
    {
        int choice2;
        string choices7 = "\n What Do You Want To Do:-\n1)Get Min/Max of Two Number \n2)Get Min/Max of Three Numbers\n= ";
    num:
        x = 0;
        while (choices7[x] != '\0')
        {
            Sleep(1);
            cout << choices7[x];
            x++;
        }
        cin >> choice2;
        if (choice2 == 1) // Get Min/Max of Two Number
        {
            Sleep(200);
            cout << "Enter A Number = ";
            cin >> a;
            Sleep(200);
            cout << "Enter Another Number = ";
            cin >> b;
            Sleep(200);
            if (a > b)
            {
                cout << a << " is Greater than " << b;
            }
            else if (b > a)
            {
                Sleep(200);
                cout << b << " is Greater than " << a;
            }
        }
        else if (choice2 == 2) // Get Min/Max of Three Numbers
        {
            Sleep(200);
            int a, b, c;
            cout << "Enter A Number = ";
            cin >> a;
            Sleep(200);
            cout << "Enter Another Number = ";
            cin >> b;
            Sleep(200);
            cout << "Enter Another Number = ";
            cin >> c;
            Sleep(200);
            if (a > b)
            {
                if (a > c)
                {
                    Sleep(200);
                    cout << a << " is Greater than " << b << "and" << c;
                }
            }
            else if (b > a)
            {
                if (b > c)
                {
                    Sleep(200);
                    cout << b << " is Greater than " << a << "and" << c;
                }
            }
            else
            {
                Sleep(200);
                cout << c << " is Greater than " << a << "and" << b;
            }
        }
        else
        {
            Sleep(200);
            cout << "Wrong Input! Try Again.\n";
            goto num;
        }
        break;
    }
    case 8: // odd or even check
    {
        int a;
        Sleep(200);
        cout << "To Check The Number is Odd or Even:-\nEnter a Number = ";
        cin >> a;
        if (a % 2 == 0)
        {
            Sleep(200);
            cout << a << " is Even Number";
        }
        else
        {
            Sleep(200);
            cout << a << " is Odd Number";
        }
        break;
    }
    case 9: // whole no or a integer
    {
        int a, b;
        Sleep(200);
        cout << "To Check The Number is Whole no or Integer :-\nEnter a Number = ";
        cin >> a;
        if (a >= 0)
        {
            Sleep(200);
            cout << a << " is Whole Number as well as a Integer";
        }
        else if (a <= 0)
        {
            Sleep(200);
            cout << a << " is Integer Number";
        }
        break;
    }
    case 10: // upper case and lowercase
    {
        char a;
        Sleep(200);
        cout << "To Check The Character is in Uppercase And Lowercase:-\nEnter a Character = ";
        cin >> a;
        if (isupper(a))
        {
            Sleep(200);
            cout << a << " is Uppercase";
        }
        else
        {
            Sleep(200);
            cout << a << " is Lowercase";
        }
        break;
    }
    case 11: // print series
    {
        int choice2;
    series:
        string choices11 = "\n What Do You Want To Do:-\n"
                           "1) To Print Till The Entered Number\n"
                           "2) To Sum Till The Entered Number\n"
                           "3) To Print Reverse Till The Entered Number\n"
                           "4) To Print Odd And Even Numbers Till The End\n"
                           "5) Sum of Odd And Even Numbers\n"
                           "6) Count Odd or Even Till The Entered Number\n"
                           "7) Print a to z in Small Letters \n"
                           "8) Print A to Z in Capital Letters\n"
                           "9) Print Aa to Zz\n"
                           "10) To Print Table of Given Number\n"
                           "11) To Print Fibonacci Series\n"
                           "12) Count of Odd And Even Digits of Given Value\n"
                           "13) Print Prime Number from 0 to n\n"
                           "14) Sum of Factorials\n"
                           "\nChoose one From Above = ";
        x = 0;
        while (choices11[x] != '\0')
        {
            Sleep(1);
            cout << choices11[x];
            x++;
        }
        cin >> choice2;
        if (choice2 == 1) // To Print Till The Entered Number
        {
            Sleep(200);
            int i, n;
            i = 0;
            cout << "Enter a Number = ";
            cin >> n;
            while (i < n)
            {
                i = i + 1;
                cout << "\n"
                     << i;
            }
        }
        else if (choice2 == 2) // To Sum Till The Entered Number
        {
            Sleep(200);
            int i, a, sum = 0;
            cout << "Enter a Number= ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                sum = sum + i;
            }
            Sleep(200);
            cout << "\n The sum of numbers from 1 to " << a << " is " << sum << "\n";
        }
        else if (choice2 == 3) // To Print Reverse Till The Entered Number
        {
            Sleep(200);
            float i, n, a;
            cout << "Enter a Number= \n";
            cin >> a;
            i = a;
            n = 1;
            while (i > n)
            {
                Sleep(200);
                i = i - 1;
                cout << "\n"
                     << i << "\n";
            }
        }
        else if (choice2 == 4) // To Print Odd And Even Numbers Till The End
        {
            Sleep(200);
            int i, a, b;
            cout << "Enter a Number= ";
            cin >> a;
            cout << "\nEven Numbers:-\n";
            for (i = 1; i <= a; i++)
            {
                if (i % 2 == 0)
                {
                    Sleep(200);
                    cout << "\n== " << i << " == ";
                }
            }
            Sleep(200);
            cout << "\nodd Numbers:-\n";
            for (i = 1; i <= a; i++)
            {

                if (i % 2 != 0)
                {
                    Sleep(200);
                    cout << "\n== " << i << " == ";
                }
            }
        }
        else if (choice2 == 5) // Sum of Odd And Even Numbers
        {
            Sleep(200);
            int i, a, b;
            int sum = 0;
            cout << "Enter a Number= ";
            cin >> a;
            Sleep(200);
            cout << "\nEven Numbers:-\n";
            for (i = 1; i <= a; i++)
            {
                if (i % 2 == 0)
                {
                    Sleep(200);
                    cout << "\n== " << i << " == ";
                    sum = sum + i;
                    Sleep(200);
                    cout << "Total = " << sum;
                }
            }
            sum = 0;
            Sleep(200);
            cout << "\n\nodd Numbers:-\n";
            for (i = 1; i <= a; i++)
            {
                if (i % 2 != 0)
                {
                    Sleep(200);
                    cout << "\n== " << i << " == ";
                    sum = sum + i;
                    Sleep(200);
                    cout << "Total = " << sum;
                }
            }
        }
        else if (choice2 == 6) // Count Odd or Even Till The Entered Number
        {
            Sleep(200);
            int i, a, Even = 0, b = 0, Odd = 0;
            cout << "Enter a Number = ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                if (i % 2 == 0)
                {
                    Sleep(200);
                    cout << "\n"
                         << i;
                    Even++;
                }
            }
            for (i = 1; i <= a; i++)
            {
                if (i % 2 != 0)
                {
                    Sleep(200);
                    cout << "\n"
                         << i;
                    Odd++;
                }
            }
            Sleep(200);
            cout << "\nTotal Even no is " << Even;
            Sleep(200);
            cout << "\nTotal Odd no is " << Odd << "\n";
        }
        else if (choice2 == 7) // Print a to z in Small Letters
        {
            int A;
            A = 97;
            for (A >= 97; A <= 122; A++)
            {
                Sleep(200);
                cout << char(A) << "\n";
            }
        }
        else if (choice2 == 8) // Print A to Z in Capital Letters
        {
            int atz;
            atz = 65;
            for (atz >= 65; atz <= 90; atz++)
            {
                Sleep(200);
                cout << char(atz) << "\n";
            }
        }
        else if (choice2 == 9) // Print Aa to Zz
        {
            char i, a = 97;
            i = 65;
            while (i <= 90 && a <= 122)
            {
                Sleep(200);
                cout << i << " " << a << "\n";
                i++;
                a++;
            }
        }
        else if (choice2 == 10) // To Print Table of Given Number
        {
            int i, input, b;
            Sleep(200);
            cout << "Enter a Number:= ";
            cin >> input;
            for (i = 1; i <= 10; i++)
            {
                Sleep(200);
                b = i * input;
                cout << "=> " << input << " x " << i << " = " << b << " <="
                     << "\n";
            }
        }
        else if (choice2 == 11) // To Print Fibonacci Series
        {
            float i, e1, e2, c = 0, terms;
            e1 = 0;
            e2 = 1;
            Sleep(200);
            cout << "Enter Number of Terms = ";
            cin >> terms;
            cout << e1 << "\n";
            for (i = 1; i <= terms; i++)
            {
                if (i == 1)
                {
                    Sleep(200);
                    cout << "";
                    continue;
                }
                if (i == 2)
                {
                    Sleep(200);
                    cout << e2 << "\n";
                    continue;
                }
                c = e1 + e2;
                e1 = e2;
                e2 = c;
                Sleep(200);
                cout << c << "\n";
            }
        }
        else if (choice2 == 12) // count odd and even digits of given number
        {
            int i, a, b = 0, c = 0, d = 0;
            cout << "Enter a Number:=";
            cin >> a;
            while (a > 0)
            {
                if (a % 2 != 0)
                {
                    d++;
                }
                if (a % 2 == 0)
                {
                    c++;
                }
                a = a / 10;
            }
            cout << "Odd Numbers =" << d << "\nEven Numbers =" << c;
        }
        else if (choice2 == 13) // print prime numbers till n
        {
            int a;
            cout << "Enter Range Where To Print Prime Numbers = ";
            cin >> a;
            cout << 2 << "\n"
                 << 3 << "\n";
            for (int i = 2; i <= a; i++)
            {
                for (int j = 2; j * j <= i; j++)
                {
                    if (i % j == 0)
                        break;
                    else if (j + 1 > sqrt(i))
                    {
                        cout << i << " " << endl;
                    }
                }
            }
        }
        else if (choice2 == 14) // sum of factorials
        {
            int i, a, sum = 0, f = 1;
            cout << "Enter a Number = ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                f = f * i;
                sum = sum + f;
            }
            cout << sum;
        }
        else
        {
            cout << "Wrong Input! Try Again";
            goto series;
        }
        break;
    }
    case 12: // Date And Time
    {
        Sleep(200);
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << "Date and Time is(Day Mth Date hh:mm:ss Year)\n                = " << dt;
        break;
    }
    case 13: // Armstrong or Not
    {
        Sleep(200);
        int a, b, temp, sum = 0;
        cout << "Enter a Number= ";
        cin >> a;
        for (temp = a; a != 0; a = a / 10)
        {
            b = a % 10;
            sum = sum + (b * b * b);
        }
        if (sum == temp)
        {
            cout << "is Armstrong";
        }
        else
        {
            cout << "not Armstrong";
        }
        break;
    }
    case 14: // Print Paterns
    {
    patterns:
        int choice3;
        string choices14 = "What Do You Want to Choose ?\n"
                           "Pattern 1\n"
                           "Pattern 2\n"
                           "Pattern 3\n"
                           "Pattern 4\n"
                           "Pattern 5\n"
                           "Pattern 6\n"
                           "Pattern 7\n"
                           "Pattern 8\n"
                           "Pattern 9\n"
                           "Pattern 10\n"
                           "Pattern 11\n"
                           "Pattern 12\n"
                           "Pattern 13\n"
                           "Pattern 14\n"
                           "Pattern 15\n"
                           "Pattern 16\n"
                           "Pattern 17\n"
                           "Pattern 18\n"
                           "Pattern 19\n"
                           "Pattern 20\n"
                           "Choose One From Above= ";
        x = 0;
        while (choices14[x] != '\0')
        {
            Sleep(1);
            cout << choices14[x];
            x++;
        }
        cin >> choice3;
        switch (choice3)
        {
        case 1:
            int i;
            for (i = 1; i <= 9; i++)
            {
                Sleep(200);
                cout << i << "  ";
                if (i == 3)
                {
                    Sleep(200);
                    cout << "\n\n";
                }
                if (i == 6)
                {
                    Sleep(200);
                    cout << "\n\n";
                }
            }
            goto start;
        case 2:
        {
            Sleep(200);
            int i, r;
            for (i = 1; i <= 5; i++)
            {
                Sleep(200);
                for (r = 1; r <= 5; r++)
                {
                    Sleep(200);
                    cout << "*";
                }
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 3:
        {
            Sleep(200);
            int i, r;
            for (i = 1; i <= 5; i++)
            {
                Sleep(200);
                for (r = 1; r <= i; r++)
                {
                    Sleep(200);
                    cout << "*";
                }
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 4:
        {
            Sleep(200);
            int r = 1, a;
            int i;
            for (i = 1; i <= 5; i++)
            {
                Sleep(200);
                for (a = 1; a <= i; a++)
                {
                    Sleep(200);
                    cout << char(a + 64);
                }
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 5:
        {
            int i, r, a = 1, b;
            for (i = 1; i <= 4; i++)
            {
                Sleep(200);
                for (r = 1; r <= i; r++)
                {
                    Sleep(200);
                    cout << a << " ";
                    a++;
                }
                Sleep(200);
                cout << endl;
            }
            goto start;
        }
        case 6:
        {
            int i, r, a = 1;
            for (i = 1; i <= 4; i++)
            {
                Sleep(200);
                for (r = 1; r <= i; r++)
                {
                    Sleep(200);
                    cout << a << " ";
                    if (a == 1)
                    {
                        a--;
                    }
                    else
                    {
                        a++;
                    }
                }
                Sleep(200);
                cout << endl;
            }
            goto start;
        }
        case 7:
        {
            int i, r;
            string b = "    ";
            for (i = 1; i <= 5; i++)
            {
                Sleep(200);
                cout << b;
                for (r = 1; r <= i; r++)
                {
                    Sleep(200);
                    cout << "*";
                }
                b.pop_back();
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 8:
        {
            int r = 1, a;
            int i;
            string b = "    ";
            for (i = 1; i <= 4; i++)
            {
                Sleep(200);
                cout << b;
                for (a = 1; a <= i; a++)
                {
                    Sleep(200);
                    cout << char(a + 96);
                }
                b.pop_back();
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 9:
        {
            int r = 1, a;
            int i;
            string b = "    ";
            for (i = 1; i <= 4; i++)
            {
                Sleep(200);
                cout << b;
                for (a = 1; a <= i; a++)
                {
                    Sleep(200);
                    cout << r;
                }
                r++;
                b.pop_back();
                Sleep(200);
                cout << "\n";
            }
            goto start;
        }
        case 10:
        {
            int i;
            char a = 65, b = 97;
            for (i = 1; i <= 5; i++)
            {
                a = 65;
                b = 97;
                for (a >= 65; a <= 69 && b >= 97; b <= 101)
                {
                    cout << a << b << " ";
                    Sleep(5);
                    a++;
                    b++;
                }
                cout << "\n";
            }
            goto start;
        }
        case 11:
        {
            int i, a = 1, c = 1, b, j, input = 1;
            for (j = 1; j <= 5; j++)
            {
                for (i = 1; i <= 5; i++)
                {
                    b = i * input;
                    Sleep(3);
                    cout << b << " ";
                }
                input++;
                cout << "\n";
            }
            goto start;
        }
        case 12:
        {
            int i, j;
            for (i = 1; i <= 5; i++)
            {
                for (j = 1; j <= 5; j++)
                {
                    Sleep(2);
                    cout << j << " ";
                }
                cout << "\n";
            }
            goto start;
        }
        case 13:
        {
            int i, r;
            for (i = 5; i >= 1; i--)
            {
                for (r = 1; r <= i; r++)
                {
                    Sleep(3);
                    cout << "*";
                }
                cout << "\n";
            }
        }
        case 14:
        {
            int i, r = 5;
            char b = 97;
            for (b >= 97; b <= 111;)
            {
                for (i = 1; i <= r; i++)
                {
                    Sleep(3);
                    cout << b << " ";
                    b++;
                }
                r--;
                cout << "\n";
            }
            goto start;
        }
        case 15:
        {
            int i, r, a = 1, b;
            for (i = 5; i >= 1; i--)
            {
                for (r = 1; r <= i; r++)
                {
                    Sleep(3);
                    cout << a << " ";
                }
                cout << endl;
                a++;
            }
            goto start;
        }
        case 16:
        {
            int i, r, a = 1;
            for (i = 1; i <= 5; i++)
            {
                for (r = 5; r >= a; r--)
                {
                    Sleep(3);
                    cout << r;
                }
                a++;
                cout << "\n";
            }
            goto start;
        }
        case 17:
        {
            int i, r, a = 1;
            string b = "        ";
            for (i = 1; i <= 5; i++)
            {
                cout << b;
                for (r = 1; r <= a; r++)
                {
                    cout << "* ";
                }
                a++;
                a++;
                b.pop_back();
                b.pop_back();
                cout << "\n";
            }
        }
        case 18:
        {
            char ch = 'A';
            int i, j, a, b;
            for (i = 1; i <= 5; i++)
            {
                Sleep(3);
                for (j = 5; j >= i; j--)
                    cout << " ";
                for (a = 1; a <= i; a++)
                    cout << ch++;
                ch--;
                for (b = 1; b < i; b++)
                    cout << --ch;
                cout << "\n";
            }
            goto start;
        }
        case 19:
        {
            int i, j, k, a, b = 1;
            for (i = 1; i <= 5; i++)
            {
                for (j = 5; j >= i; j--)
                {
                    cout << " ";
                }
                for (k = 1; k <= i; k++)
                {
                    cout << b++;
                }
                b--;
                for (a = 1; a < i; a++)
                {
                    cout << b--;
                }
                cout << "\n";
            }
        }
        case 20:
        {
            int i, j, k, a, b = 1;
            for (i = 1; i <= 4; i++)
            {
                for (j = 5; j >= i; j--)
                {
                    cout << " ";
                }
                for (k = 1; k <= i; k++)
                {
                    cout << b;
                }
                for (a = 1; a < i; a++)
                {
                    cout << b;
                }
                b++;
                cout << "\n";
            }
            goto start;
        }
        default:
            goto patterns;
        }
    }
    case 15: // Palindrome or not
    {
        int i, a, b, reverse = 0, reminder;
        cout << "Enter a Number = ";
        cin >> a;
        b = a;
        while (a != 0)
        {
            reminder = a % 10;
            reverse = reverse * 10 + reminder;
            a = a / 10;
        }
        if (b == reverse)
        {
            cout << "It is Palindrome Number.\n";
        }
        else
        {
            cout << "It is Not a Palindrome Number.\n";
        }
        goto start;
    }
    case 16:
    {
        exit(0);
    }
    default:
    {
        cout << "Wrong Input! Restart The Program";
        exit(0);
    }
    }
    goto start;
    return (0);
}
