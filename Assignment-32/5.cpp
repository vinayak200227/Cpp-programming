// 5. Define a class A having multiple constructors. Define another class B derived from class
// A. Create derived class constructors and show use of constructor in this single inheritance.

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of class A with no arguments." <<endl;
    }

    A(int x)
    {
        cout << "Constructor of class A with int argument: " << x <<endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of class B with no arguments." <<endl;
    }

    B(int x) : A(x)
    {
        cout << "Constructor of class B with int argument: " << x <<endl;
    }
};

int main()
{
    A objA1;     // Calls constructor of class A with no arguments
    A objA2(10); // Calls constructor of class A with int argument

    B objB1;     // Calls constructor of class A with no arguments, then constructor of class B with no arguments
    B objB2(20); // Calls constructor of class A with int argument, then constructor of class B with int argument

    return 0;
}
