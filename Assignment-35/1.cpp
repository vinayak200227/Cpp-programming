// 1. Write a C++ program to demonstrate the addition of multiple types of data using generic functions or templates.

#include<iostream>
using namespace std;

template<class T>
T addition(T num1, T num2)
{
    return (num1+num2);
}

int main()
{
    cout<<"Addition of Interger parameter : "<<addition<int>(10,10)<<endl;
    cout<<"Addition of float parameter : "<<addition<float>(15.5,20.10)<<endl;
    return 0;
}