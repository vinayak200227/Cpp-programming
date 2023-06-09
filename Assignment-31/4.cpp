// Write a C++ program to design a base class Person (name, address, phone_no). Derive
// a class Employee (eno, ename) from Person. Derive a class Manager (designation,
// department name, basic-salary) from Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary


#include<iostream>
#include<string>
using namespace std;

class Person
{
    protected:
        char pname[50], address[100];
        long long phone_no;
};

class Employee: public Person
{
    public:
    int eno;
    char ename[50];
};

class Manager: public Employee
{
    public:
        char designation[50], deptname[100];
        float basic_salary;

        void accept_details()
        {
            cout<<"Enter Details of Manager"<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"Enter Employee No. : ";
            cin>>eno;
            cout<<"Enter Name : ";
            cin>>ename;
            cout<<"Enter Addresss : ";
            cin>>address;
            cout<<"Enter Phone No. : ";
            cin>>phone_no;
            cout<<"Enter Designation : ";
            cin>>designation;
            cout<<"Enter Department Name : ";
            cin>>deptname;
            cout<<"Enter Basic Salary : ";
            cin>>basic_salary;
            cout<<"-------------------------------"<<endl;
        }

};
int main()
{
    int i,cnt;
    char temp2;
    Manager man[100];
    Manager temp;
    cout<<"How many manager you want to Enter? : ";
    cin>>cnt;
    for (int i = 0; i<cnt; i++)
    {
        man[i].accept_details();
    }

    temp.basic_salary = 0;
    for(i = 0; i< cnt; i++)
    {
        if (man[i].basic_salary > temp.basic_salary)
            temp = man[i];
    }

    cout<<"Manager with Highest Salary is : "<<temp.basic_salary<<" And, Manager Name is : "<<temp.ename<<endl;

    return 0;
}