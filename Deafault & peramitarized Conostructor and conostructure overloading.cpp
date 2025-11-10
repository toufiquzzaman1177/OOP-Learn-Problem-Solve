#include<iostream>
using namespace std;

class student{
public:
    int id;
    double cgpa;

    student(int x, double y)
    {
        id=x;
        cgpa=y;
    }

    student()
    {
        cout<<"Default conostructor"<<endl;
    }

    void display()
    {
        cout<<"ID= "<<id<<endl<<"CGPA= "<<cgpa<<endl;
    }

};

int main()
{
    student obj;
    student toufiq(2158, 3.00);
    toufiq.display();

    student swapnil(118133, 4.96);
    swapnil.display();

    return 0;
}

/*
1st conostructor is parametarized & 2nd conostructor is default.
But conostructoer 1 & 2 is overloading because overloading is mone then one
*/
