#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //sizeof used
    int a;
    float f;
    double d;
    char name[20];

    int A=sizeof(a);
    cout <<A <<endl;

    int F=sizeof(f);
    cout<< F <<endl;

    int D=sizeof (d);
    cout <<D <<endl;

    int H=sizeof (name);
    cout <<H << endl;

    //comma used
    int x,y,sum;

    sum=(x=20, y=10, sum=x+y);
    cout<<sum;


    getch();
}
