#include<iostream>
#include<conio.h>
#include<iomanip>
//#include<string.h>
using namespace std;

int main()
{
    int a,i;
    string j;

    do{
    cout<< "Enter a number to find table : ";
    cin>>a;
    for(i=1;i<=12;i++)
    {
        cout<<setw(2)<<a*i<<" ";
        
    }
    cout<<"\nEnter 1 for exit : ";
    cin>>j;
    }while(j != "1");

    getch();
    return 0;
}