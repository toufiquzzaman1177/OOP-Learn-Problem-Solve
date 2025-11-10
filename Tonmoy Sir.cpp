#include<iostream>
using namespace std;

class student{

public:
    string name;
    int id;
    void displaystudentdetails()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
    }
protected:
    float cgpa;

};

class cg:public student{
public:
    void setCGPA(float c)
    {
        cgpa=c;
    }

    void displaycgpa()
    {
        cout<<"CGPA:"<<cgpa<<endl;
    }

};

int main()
{
    student s;
    cg o1;
    o1.setCGPA(3.5);
    o1.displaycgpa();
    s.displaystudentdetails();
    s.displaystudentdetails();
    s.displaystudentdetails();

    return 0;
}
