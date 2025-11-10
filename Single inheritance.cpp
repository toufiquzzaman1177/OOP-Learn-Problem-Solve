#include<iostream>
using namespace std;
class cse{
public:
    cse()
    {
        cout<<"Northern University Bangladesh"<<endl;
    }
};
class Department: public cse{

};
int main()
{
    Department obj;

    return 0;
}
