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

    void display()
    {
        cout<<"ID= "<<id<<endl<<"CGPA= "<<cgpa<<endl;
    }

};

int main()
{
    student toufiq(2158, 3.00);
    toufiq.display();

    student swapnil(118133, 4.96);
    swapnil.display();

    return 0;
}

