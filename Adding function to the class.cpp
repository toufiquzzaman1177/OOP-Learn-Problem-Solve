#include<iostream>
using namespace std;

class Student{
public:
    int id;
double gpa;

    void display()
    {
        cout <<id <<"   "<<gpa<<endl;
    }
};

int main()
{
    Student Toufiq, Swapnil;

    Toufiq.id=2158;
    Toufiq.gpa=3.00;
    Toufiq.display();

    Swapnil.id=118133;
    Swapnil.gpa= 4.96;
    Swapnil.display();

    return 0;
}
