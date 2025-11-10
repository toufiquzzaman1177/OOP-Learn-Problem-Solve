#include<iostream>
using namespace std;
class car{
public:
    car()
    {
        cout<<"Car Conostructor"<<endl;
    }
};
class electric : virtual public car{
public:
    electric()
    {
        cout<<"Electric Conostructor"<<endl;
    }
};
class gasoline : virtual public car{
public:
    gasoline()
    {
        cout<<"Gasoline Conostructor"<<endl;
    }
};
class hybrid : public electric, public gasoline{
public:
    hybrid()
    {
        cout<<"Hybrid Conostructor"<<endl;
    }
};
int main()
{
    hybrid obj;

    return 0;
}
