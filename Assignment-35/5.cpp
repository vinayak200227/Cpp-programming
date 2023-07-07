// 5. Write a C++ Program to Add two numbers using function template.

#include<iostream>
using namespace std;

template <class T>
T add(T a1, T a2)
{
    return a1 + a2;
}

int main()
{
    cout<<"Addition of integers = "<<add<int>(20,30)<<endl;
    cout<<"Addition of floats = "<<add<float>(20.4,30.7)<<endl;
    cout<<"Addition of charcters = "<<add<char>('A','0')<<endl;

    return 0;
}