// 8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
    int a=5, b=10;
    a = a + b; // a = 15
    b = a - b; // b = 5
    a = a - b; // a = 10

    cout<<"a = "<<a<<", b = "<<b<<endl;

    return 0;
}