// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.

#include<iostream>
using namespace std;

class Base
{
    protected:
        float marks1,marks2, marks3;
    public:
        void input()
        {
            cout<<"Enter marks of 3 subjects "<<endl;
            cin>>marks1>>marks2>>marks3;
        }
};

class Derived : public Base
{
    protected:
        float sum;

    public:
        void total()
        {
            sum = marks1 + marks2 + marks3;
        }
};

class percentage : public Derived
{
    int percentage;

    public:
        void calculatePercentage()
        {
            percentage = (sum/300.0)*100.0;
        }
        void display()
        {
            cout<<"Percentage = "<<percentage<<endl;
        }
};


int main()
{
    percentage p;
    p.input();
    p.total();
    p.calculatePercentage();
    p.display();


    return 0;
}