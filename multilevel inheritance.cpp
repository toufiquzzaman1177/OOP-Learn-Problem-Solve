#include<iostream>
using namespace std;
class cse{
public:
    cse()
    {
        cout<<"I am from CSE Department"<<endl;
    }
};
class eee:public cse{
public:
    eee()
    {
        cout<<"I am from EEE Department"<<endl;
    }
};
class bba:public eee{
public:
    bba()
    {
        cout<<"I am from BBA Department"<<endl;
    }
};
int main()
{
    bba obj;

    return 0;
}
