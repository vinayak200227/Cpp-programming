// 10. Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;
void add(int x, double y)
{
    cout<<"Addition is "<<x+y<<endl;
}

void add(double x, int y)
{
    cout << "Addition is " << x + y<<endl;
}

void add(int x, int y)
{
    cout << "Addition is " << x + y << endl;
}

void add(double x, double y)
{
    cout << "Addition is " << x + y << endl;
}

int main()
{
    add(2,3.5);
    add(3.5 ,4);
    add(1.0,4.9);
    add(3, 9);
    return 0;
}