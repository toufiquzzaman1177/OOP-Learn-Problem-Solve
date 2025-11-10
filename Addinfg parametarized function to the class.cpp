#include<iostream>
using namespace std;

class student{
public:
    int id;
    double gpa;

    void setValue( int x, double y)
    {
        id=x;
        gpa=y;
    }
    void display()
    {
    cout << "Id= "<<id<<endl<<"GPA= "<<gpa<<endl;
    }

};

int main()
{
    student toufiq, swapnil;
    toufiq.setValue( 2158, 3.00);
    toufiq.display();

    swapnil.setValue(118133, 4.96);
    swapnil.display();
}
