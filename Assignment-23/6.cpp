// 6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    float Avg;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    Avg = (a+b+c)/3.0;
    cout<<"Average is "<<Avg<<endl;
    return 0;
}