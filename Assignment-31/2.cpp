// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in derived class.

#include<iostream>
using namespace std;

class Base
{
    protected:
        int x, y;

    public:
        void input()
        {
            cout<<"Enter 2 numbers"<<endl;
            cin>>x>>y;
        }
};

class derived : public Base
{
    int sum;

    public:
        void add()
        {
            sum = x + y;
        }

        void display()
        {
            cout<<"Sum = "<<sum<<endl;
        }
};

int main()
{
    derived d;
    d.input();
    d.add();
    d.display();
    
    return 0;
}