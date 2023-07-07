// 6. Write a C++ Program to find Sum of Array using function template.

#include<iostream>
using namespace std;

template<class T>

T sum(T a[], int length)
{
    T ret = a[0];
    for(int i = 1; i< length; i++)
    {
        ret = ret + a[i];
    }
    return ret;
}

int main()
{
    int int_data[5];
    float float_data[5];
    int i;

    // input 5 integers
    cout<<"Input 5 integers : "<<endl;
    for(i= 0;i<5;i++)
    {
        cin>>int_data[i];
    }
    // print sum of 5 integers
    cout<<"Sum of above is : "<<sum<int>(int_data,5)<<endl;

    // input 5 floats
    cout << "Input 5 float : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> float_data[i];
    }
    // print sum of 5 floats
    cout << "Sum of above is : " << sum<float>(float_data, 5) << endl;
    return 0;
}