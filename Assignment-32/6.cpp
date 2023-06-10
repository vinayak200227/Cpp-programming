// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"A called"<<endl;
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"B called"<<endl;
        }
};

class C : public B
{
    public:
        C()
        {
            cout<<"C called"<<endl;
        }
};

int main()
{
    C c;
    return 0;
}