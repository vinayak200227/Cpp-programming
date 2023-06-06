// 5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;

int main()
{
    float l, b, h, v;
    cout<<"Enter length, breadth, height of cube"<<endl;
    cin>>l>>b>>h;
     v = l * b * h;
     cout<<"Volume of cuboid is "<<v<<endl;
    return 0;
}