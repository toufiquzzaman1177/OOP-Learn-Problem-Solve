#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<< "Enter any number:";
    cin>> num;

    if(num>0)
        cout<< "Positive";
    if (num<0)
        cout<< "Negetive";
    if (num==0)
        cout<< "Zero";


    getch();
}
