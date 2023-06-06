// 10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

int main()
{
    int a[10], sum = 0, i;
    cout<<"Enter 10 numbers :"<<endl;
    for(i= 0; i<10;i++)
    {
        cin>>a[i];
    }
    for( i = 0; i< 10; i++)
    {
        sum += a[i];
    }

    cout<< "Sum is " << sum << endl;
    return 0;
}