#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
   float num1, num2;

   cout<< "Enter 2 numbers:";
   cin>> num1 >> num2;

   cout<<showpoint;
   cout<< fixed;
   cout<<setprecision(3);

   float sum= num1+num2;
   cout<< setw(20) << "Sum is:"  << sum <<endl;

   cout<< noshowpoint;

   float sub= num1-num2;
   cout<< setw(20) <<  "Subtraction is:"  << sub <<endl;


    float mul= num1*num2;
   cout<< setw(20) << "Multiplication is:"  << mul <<endl;

    double div= (float)num1/num2;
   cout<< setw(20) << "Division is:"  << div <<endl;

    //float rem = num1%num2;
   //cout<< "Remainder is:"  << rem <<endl;



    getch();
}


