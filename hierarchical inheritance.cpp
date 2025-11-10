#include<iostream>
using namespace std;
class cse{
public:
    cse()
    {
        cout<<"I am from CSE Department"<<endl;
    }
};
class first : public cse{
public:
    first()
    {
        cout<<"I am from OOP class"<<endl;
    }
};
class second : public cse{
public:
    second()
    {
        cout<<"I am from OOP lab"<<endl;
    }
};
int main()
{
    first obj1;
    second obj2;

    return 0;
}
