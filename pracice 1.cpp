/*
Create a class "Bnak".Declare private variables like BankID,BankName,Location
and class constructor that can take any two of declared parameters. And write
a function Print_Values() that can print the constructor's values.
Create another class "Customer".Declare class constructor that can take two
parameters like Customer_ID and Amount. And write a function Print_Values2()
that can print the constructor's values.
Inherit the Bank class from the Customer class.
By creating the main function call the Print_Values2 function of the Customer class.
*/
#include<iostream>
using namespace std;
class Bank{
private:
    string BankID;
    string BankName;
    string Location;
public:
    Bank(string id , string name){
    BankID=id;
    BankName=name;
    Location="Not Provided";
    }
    Bank(string id, string location, bool islocation){
    BankID=id;
    location= location;
    BankName="Not provided";
    }
    void Print_Values()
    {
        cout<<"Bank ID    : "<<BankID<<endl;
        cout<<"Bank Name  : "<<BankName<<endl;
        cout<<"Location   : "<<Location<<endl;
    }
};
class Customer:public Bank{
private:
    string Customer_ID;
    double Amount;
public:
    Customer(string customerID, double amount, string BankID, string BankName):Bank(BankID, BankName)
    {
        Customer_ID=customerID;
        Amount=amount;
    }
    void Print_Values2()
    {
        cout<<"Customer ID: "<<Customer_ID<<endl;
        cout<<"Amount     : "<<Amount<<endl;
        Print_Values();
    }
};
int main()
{
    Customer customer1("C001",1500.58, "B001","XYZ Bank");
    customer1.Print_Values2();
    return 0;
}
