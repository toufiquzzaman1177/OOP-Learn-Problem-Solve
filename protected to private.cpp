#include<iostream>
using namespace std;
class CSE{
protected:
    string name="Toufiq"; int id=2158;
    void PRINT()
    {
        cout<<"I am from OOP class"<<endl;
    }
};
class PRIME: private CSE{
public:
    void display()
    {
        cout<<"Name: "<<name<<endl<<"ID  : "<<id<<endl;
    }
};
int main()
{
    PRIME obj;
    obj.display();

    return 0;
}

