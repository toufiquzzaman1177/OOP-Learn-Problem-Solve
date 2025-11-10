#include<iostream>
using namespace std;

class point{

private:
    int x,y,z;

public:
    point(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    getx()
    {
        return x;
    }
    gety()
    {
        return y;
    }
    getz()
    {
        return z;
    }
};

int main()
{
    point p1= point(4,8,6);
    cout<<"The valoe of X: "<<p1.getx()<<endl;
    cout<<"The valoe of Y: "<<p1.gety()<<endl;
    cout<<"The valoe of Z: "<<p1.getz()<<endl;

}
