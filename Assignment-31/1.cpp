// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    protected:
        // char name[20];

        string name;
        int age;

    public:
        // void setName(char *n)
        // {
        //     strcpy(name,n);
        // }
        void setName(string s)
        {
            name = s;
        }

        void setAge(int a)
        {
            age = a;
        }

        int getAge()
        {
            return age;
        }
};

class Employee : public Person
{
    int empId;
    int salary;

    public:
        void setId(int id)
        {
            empId = id;
        }
        void setSalary(int s)
        {
            salary = s;
        }
        int getId()
        {
            return empId;
        }
        int getSalary()
        {
            return salary;
        }

        void display()
        {
            cout<<"name = "<<name<<" age = "<<age<<" Id = "<<empId<<" salary = "<<salary<<endl;
        }
};
int main()
{
    Employee e;
    e.setName("Vinayak");
    e.setAge(20);
    e.setId(167);
    e.setSalary(100000);

    e.display();

    return 0;
}