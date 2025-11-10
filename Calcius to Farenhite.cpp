#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double farn, cels;

    cout<< "Enter celcius:";
    cin>> cels;

    farn=1.8 * cels +32;

    cout<< "Farenheit:" <<farn;

    getch();
}

