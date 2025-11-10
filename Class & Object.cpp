#include<iostream>
using namespace std;

class Student{
public:
    int id;
double gpa , cgpa;
};

int main()
{
    Student Toufiq, Swapnil;

    Toufiq.id=2158;
    Toufiq.cgpa=3.00;

    Swapnil.id=118133;
    Swapnil.gpa= 4.96;

    cout<<"ID= " <<Toufiq.id<<endl;
    cout<<"CGPA= " <<Toufiq.cgpa<<endl;

    cout<<"ID= "<< Swapnil.id << "  "<<"GPA= " <<Swapnil.gpa<<endl;



    return 0;
}
