#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int choice1 = 0, Naan = 0, AlooParatha = 0, Chapati = 0, AlluSabji = 0, MatarPaneer = 0, Daal = 0, Rs = 0;
    int Choice, random;

    cout << "=============|| Welcome To Gaurav's Restaurent ||============";
    while (choice1 < 7)
    {
        cout << "\nWhat Do You Want Select From Below:--\n"
                "1) Naan                 | Rs | 40 |   = "
             << Naan << "\n"
                        "2) Aloo Paratha         | Rs | 50 |   = "
             << AlooParatha << "\n"
                               "3) Chapati              | Rs | 10 |   = "
             << Chapati << "\n"
                           "4) Allu Sabji           | Rs | 200 |   = "
             << AlluSabji << "\n"
                             "5) Matar Paneer Sabji   | Rs | 300 |   = "
             << MatarPaneer << "\n"
                               "6) Daal                 | Rs | 150 |   = "
             << Daal << "\n"
                        "7) Press 7 When You Have Selected\n== ";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
        {
            Naan++;
            Rs = Rs + 40;
            break;
        }
        case 2:
        {
            AlooParatha++;
            Rs = Rs + 50;
            break;
        }
        case 3:
        {
            Chapati++;
            Rs = Rs + 10;
            break;
        }
        case 4:
        {
            AlluSabji++;
            Rs = Rs + 200;
            break;
        }
        case 5:
        {
            MatarPaneer++;
            Rs = Rs + 300;
            break;
        }
        case 6:
        {
            Daal++;
            Rs = Rs + 150;
            break;
        }
        default:
            break;
        }
    }

    int Total = Naan + AlooParatha + Chapati + AlluSabji + MatarPaneer + Daal;

    cout << "You Orderd Total " << Total << " Items" << endl;
    if (Rs == 0)
    {
        goto c;
    }
    else
    {
        cout << "Wait Till Your Order is Processed...\n";
        Sleep(2000);
        cout << "Your Order is Processed Pay " << Rs << " Rs.\n";
    b:
        cout << "\nChoose Your Payment Option:-\n"
                "1) Card\n"
                "2) UPI\n"
                "3) Cash\n=";
        cin >> Choice;
        if (Choice == 1)
        {
            string cardnum, CName, Expiry;
            cout << "Enter Your Card Details Below:-\n"
                    "Card Number = ";
            cin >> cardnum;
            cout << "Expiry Date(1-1-2001) = ";
            cin >> Expiry;
            cout << "Enter Your Name = ";
            cin >> CName;
            cout << "\nChecking Your card Please Wait....\n";
            Sleep(500);
            cout << "! Payment Confirmed !\n"
                    "Your Order Number is = "
                 << random;
        }
        else if (Choice == 2)
        {
            long long UPINUM;
            cout << "Enter Your UPI Number = ";
            cin >> UPINUM;
            cout << "You Got a Message In Your UPI App Click on It And Pay\n";
            cout << "Waiting For Confirmition....\n";
            Sleep(500);
            cout << "Your Payment is Confrimed... Thank You !\n"
                    "Your Order Number is = "
                 << random;
        }

        else if (Choice == 3)
        {
            cout << "Please Pay At Counter Your Order Number is = " << random;
        }
        else
        {
            cout << "Try Again ! Sir\n";
            goto b;
        }
    }
c:
    cout << "\nThanks For Visit :)";
}