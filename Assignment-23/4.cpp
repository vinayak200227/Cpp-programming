// 4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;

int main()
{
    float r,Area;
    cout<<"Enter radius"<<endl;
    cin>>r;
    Area = 3.14 * r * r;
    cout<<"Area of circle having radius "<<r<<" is "<<Area;
    return 0;
}