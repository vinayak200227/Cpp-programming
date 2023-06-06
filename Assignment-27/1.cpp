// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

#include<iostream>
using namespace std;
class complex
{
    public:
        int a, b;

        complex()
        {

        }

        complex(int x, int y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout<<"a + bi = "<<a<<" + "<<b<<"i"<<endl;
        }

        complex operator+(complex c)
        {
            complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;

            return temp;
        }

        complex operator-(complex c)
        {
            complex temp;
            temp.a = a - c.a;
            temp.b = b - c.b;

            return temp;
        }

        complex operator*(complex c)
        {
            complex temp;
            temp.a = a * c.a;
            temp.b = b * c.b;

            return temp;
        }

        bool operator==(complex c)
        {
            if(a == c.a && b == c.b)
                return true;
            else
                return false;
        }

};
int main()
{
    complex c1(5,3), c2(3,2),c3, c4, c5, c6;
    c1.display();
    c2.display();

    c3 = c1 + c2;
    c3.display();

    c4 = c1 - c2;
    c4.display();

    c5 = c1 * c2;
    c5.display();

    cout<<"compare c1 == c4 "<<(c1==c4);

    return 0;
}