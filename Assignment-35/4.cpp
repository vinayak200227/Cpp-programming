// 4. Write a C++ Program to Swap data using function template.

#include<iostream>
using namespace std;

template <typename T>
void swapData(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int intA = 10, intB = 20;
    cout<<&intA<<endl;
    cout << "Before swap - intA: " << intA << ", intB: " << intB << endl;
    swapData(intA, intB);
    cout << "After swap - intA: " << intA << ", intB: " << intB << endl;

    double doubleA = 3.14, doubleB = 2.71;
    cout << "Before swap - doubleA: " << doubleA << ", doubleB: " << doubleB << endl;
    swapData(doubleA, doubleB);
    cout << "After swap - doubleA: " << doubleA << ", doubleB: " << doubleB << endl;

    return 0;
}
