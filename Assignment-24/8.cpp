// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

void area(float radius)
{
    cout<<"Area of circle = "<<3.14*radius* radius<<endl;
}

void area(double l, double b)
{
    cout<<"Area of rectangle = "<<l*b<<endl;
}

void area(int base, int height)
{
    cout<<"Area of traingle = "<<0.5*base*height<<endl;
}
int main()
{
    area(3);
    area(3, 2);
    area(3.4, 6.8);

    return 0;
}