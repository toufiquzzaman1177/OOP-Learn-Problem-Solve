#include<iostream>
using namespace std;
class CSE{
public:
    string name="Toufiq"; int id= 2158;
    void PRINT(){
        cout<<"I am from CSE class"<<endl;
    }
};
class PRIME : public CSE{
public:
    void display(){
            cout <<"Name: "<<name<<endl<<"ID  : "<<id<<endl;
    }
};
int main()
{
    PRIME obj;
    obj.display();
    obj.PRINT();

    return 0;
}
