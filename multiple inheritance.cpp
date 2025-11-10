#include<iostream>
using namespace std;
class vehicle{
public:
    vehicle()
    {
        cout<<"This is vehicle"<<endl;
    }
};
class four_wheeler{
public:
    four_wheeler()
    {
        cout<<"This is four_wheeler"<<endl;
    }
};
class car: public vehicle, public four_wheeler{
public:
    car()
    {
        cout<<"This is car" <<endl;
    }
};
int main()
{
    car obj;

    return 0;
}
