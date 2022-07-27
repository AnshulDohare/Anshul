#include <iostream>
#include <conio.h>

#include <windows.h>
using namespace std;
static float money = 1000.00;
class Account
{
public:
    int input(void);
    void credit(void);
    void withdraw(void);
    int output(void);
};

int Account::input()
{
    int input;

    cout << "\nEnter 1 for credit amount in account and 2 for withdrawl amount from acount : ";
    cin >> input;
    if (input == 1)
    {
        credit();
    }
    else if (input == 2)
    {
        withdraw();
    }
    else
        cout << "\nInvalid Input ";

    output();
}
void Account::credit()
{
    int a;
    cout << "\nCredited Amount : ";
    cin >> a;
    money = money + a;
    cout << "\nCurrent Balance : " << money << endl;
}
void Account::withdraw()
{
    int b;
    cout << "\nWithdrawl Amount : ";
    cin >> b;
    if (b > money)
    {
        cout << "\nThere are no " << b << " Rs. in your account " << endl;
    }
    else
    {
        money = money - b;
    }
    cout << "\ncurrent Balance : " << money << endl;
}

int Account::output()
{
    int x;
    cout << "Enter 1 for exit(or any integer for continue) : ";
    cin >> x;
    if (x == 1)
    {
        return 0;
    }
    else
    {
        input();
    }
}

int main()
{
    system("color 2");
    Account a1;
    cout << "Corrent Balance : 1000 Rs." << endl;
    a1.input();
    getch();
    return 0;
}