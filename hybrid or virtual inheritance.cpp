#include<iostream>
using namespace std;
class cse{
public:
    cse()
    {
        cout<<"I am from cse class"<<endl;
    }
};
class eee{
public:
    eee()
    {
        cout<<"I am from eee class"<<endl;
    }
};
class bba : public cse{
public:
    bba()
    {
        cout<<"I am from bba class"<<endl;
    }
};
class llb : public cse, public eee{
public:
    llb()
    {
        cout<<"I am from llb class"<<endl;
    }
};
int main()
{
    llb obj;

    return 0;
}
