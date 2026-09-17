#include<iostream>
using namespace std;

class Employee
{
private:
    float basicSalary;
    float da;
    float hra;
    float grossSalary;
    float tax;
    float nettSalary;

public:
    int empId;
    string empName;

void calculateSalary(float bs)
{
    basicSalary = bs;
    da = (basicSalary * 2)/100;
    hra = (basicSalary * 3)/100;
    grossSalary = basicSalary + da+ hra;
    tax = (grossSalary * 3)/100;
    nettSalary = grossSalary - tax;
}

void displayData()
{
    cout<<"Employee Id:"<<empId<<endl;
    cout<<"Employee name:"<<empName<<endl;
    cout<<"Employee Basic Salary:"<<basicSalary<<endl;
    cout<<"Employee Da:"<<da<<endl;
    cout<<"Employee Hra:"<<hra<<endl;
    cout<<"Employee Gross Salary:"<<grossSalary<<endl;
    cout<<"Employee tax:"<<tax<<endl;
    cout<<"Employee Nett Salary:"<<nettSalary<<endl;
}

};

int main()
{
    Employee emp;
    emp.empId = 522456;
    emp.empName = "Deepanshu";

    emp.calculateSalary(20000);
    emp.displayData();

    return 0;
}
