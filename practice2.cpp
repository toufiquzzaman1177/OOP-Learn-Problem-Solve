/*
Create the classes "CPP","PYTHOPN",and "JAVA" with Private Data Members:
Invention_Year,Invented_Country.Public Member Function: A parameterized
constructor to take and assign values to the data members and print those values.
Inherit the "CPP" and "PYTHON" classes from the "JAVA" class.
Now test the program by creating an object of the "JAVA" class.s
*/
#include<iostream>
using namespace std;
class JAVA{
private:
    int Invention_Year;
    string Invented_Country;
public:
    JAVA(int year,string country)
    {
        Invention_Year=year;
        Invented_Country= country;
    }
    void printInfo()
    {
        cout<<"Invention Year  : "<<Invention_Year<<endl;
        cout<<"Invented Country: "<<Invented_Country<<endl;
    }
};
class CPP : public JAVA{
public:
    CPP(int year, string country): JAVA(year,country)
    {

    }
};
class PYTHON : public JAVA{
public:
    PYTHON(int year, string country): JAVA(year,country)
    {

    }
};
int main()
{
    JAVA javaObj(1995,"USA");
    cout<<"JAVA Langauge Info"<<endl;
    javaObj.printInfo();
    return 0;
}
