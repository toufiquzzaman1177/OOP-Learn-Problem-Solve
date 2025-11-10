#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double farn, cels;

    cout<< "Enter Farenheit:";
    cin>> farn;

    cels=(farn-32)/1.8;

    cout<< "Calcius:" <<cels;

    getch();
}


