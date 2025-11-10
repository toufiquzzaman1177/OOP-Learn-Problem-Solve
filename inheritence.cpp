#include<iostream>
using namespace std;

class cse{
public:
    cse()
    {
        cout<<"cse class"<<endl;
    }
};

class eee{
public:
    eee()
    {
        cout<<"eee class"<<endl;
    }
};
class prime:public cse{
public:
    prime()
    {
        cout<<"NO class"<<endl;
    }
};
class print:public cse,public eee{
    public:
    print()
    {
        cout<<"overloding"<<endl;
    }
};

int main()
{
   cse obj;
   eee obj1;
   prime obj2;
   print obj3;


    return 0;
}
