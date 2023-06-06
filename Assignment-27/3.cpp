// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.

#include <iostream>
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
        cout << "a + bi = " << a << " + " << b << "i" << endl;
    }

    friend complex operator+(complex c1, complex c2)
    {
        complex temp;
        temp.a = c1.a + c2.a;
        temp.b = c1.b + c2.b;

        return temp;
    }
};
int main()
{
    complex c1(5, 3), c2(3, 2), c3;
    c1.display();
    c2.display();

    c3 = c1 + c2;
    c3.display();

    return 0;
}