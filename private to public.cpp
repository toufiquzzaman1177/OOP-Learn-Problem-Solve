#include<iostream>
using namespace std;
class CSE{
private:
    string name= "Toufiq"; int id=2158;
    void PRINT()
    {
        cout<<"I am from OOP class"<<endl;
    }
};
class PRIME : public CSE{
public:
    void display()
    {
        cout<<"Name: "<<name<<endl<<"ID  :"<<id<<endl; //Not accessabile because private kauke access lore nas.
                                                       //So error asbe
    }
};
int main()
{
    PRIME obj;
    obj.display();

    return 0;
}

