// 7. Write class declarations and member function definitions for a C++ base class to
// represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number
// of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.

#include<iostream>
using namespace std;

class Employee
{
    public:
        int emp_code;
        char ename[10];
};

class Fulltime : public Employee
{
    public:
        int daily_rate, no_of_days,salary;

        void setData()
        {
            cout << "----------------------------------"<<endl;
            cout << "Enter Employee number : ";
            cin>>emp_code;
            cout<<"Enter Employee name : ";
            cin>>ename;
            cout<<"Enter Employee's working days : ";
            cin>>no_of_days;
            cout<<"Enter Employee's daily rate : ";
            cin>>daily_rate;
        }

       void getSalary()
       {
        salary = daily_rate * no_of_days;
       }

       void get_details()
       {
        cout<<"--------------------------------"<<endl;
        cout<<"Employee Number : "<<emp_code<<endl;
        cout<<"Employee Name   : "<<ename<<endl;
        cout<<"Salary          : "<<salary<<endl;
        cout<<"Status          : Fulltime"<<endl;
        
       }

};

class Parttime : public Employee
{
    public:
        int hourly_rate, no_of_hours,salary;

        void setData()
        {
            cout<<"Enter Employee number : ";
            cin>>emp_code;
            cout<<"Enter Employee name : ";
            cin>>ename;
            cout<<"Enter Employee's working hours : ";
            cin >> no_of_hours;
            cout<<"Enter Employee's hourly rate : ";
            cin >> hourly_rate;
        }

       void getSalary()
       {
            salary = hourly_rate * no_of_hours;
       }

       void get_details()
       {
        cout<<"--------------------------------"<<endl;
        cout<<"Employee Number : "<<emp_code<<endl;
        cout<<"Employee Name   : "<<ename<<endl;
        cout<<"Salary          : "<<salary<<endl;
        cout<<"Status          : Parttime"<<endl;
       }

};
int main()
{
    Fulltime f[10];
    Parttime p[10];

    int choice;
    do{
        cout<<"1. Enter Record"<<endl;
        cout<<"2.Dispaly Record"<<endl;
        cout<<"3.Search Record"<<endl;
        cout<<"4.Ouit"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                int cnt;
                cout<<"Enter how many full time employees : ";
                cin>>cnt;
                for(int i = 0; i<cnt; i++)
                {
                    f[i].setData();
                }
                cout<<"Enter how many parttime time employees : ";
                cin>>cnt;
                for(int i = 0; i<cnt; i++)
                {
                    p[i].setData();
                }
                break;
            case 2:
                for (int i = 0; i < cnt; i++)
                {
                    f[i].getSalary();
                    f[i].get_details();
                }
                for (int i = 0; i < cnt; i++)
                {
                    p[i].getSalary();
                    p[i].get_details();
                }
                break;
            case 3:
                int ID, flag = 0;
                cout<<"Enter Employee number to search : ";
                cin>>ID;
                for(int i = 0;i<cnt;i++)
                {
                    if (f[i].emp_code == ID || p[i].emp_code == ID)
                    {
                       flag = 1;
                        break;
                    }
                }
                if(flag == 1) cout<<"Employee found !!"<<endl; 
                else cout<<"Employee not found"<<endl;

                break;
        }
    }while(choice != 4);
    return 0;
}