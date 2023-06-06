// 9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    int max;
 
    max = x > y ? x : y;

    cout<<"Maximum of "<<x<<" & "<<y<<" is "<<max;

    return 0;
}