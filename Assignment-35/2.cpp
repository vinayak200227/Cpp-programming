// 2. Write a C++ Program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;

template<class T>

T Large(T n1, T n2)
{
    return (n1>n2) ? n1 : n2;
}

int main()
{
    int i1, i2;
    float f1, f2 ;
    char c1, c2;

    cout<<"Enter two integers"<<endl;
    cin>>i1>>i2;
    cout<<"Enter two floats"<<endl;
    cin>>f1>>f2;
    cout<<"Enter two characters"<<endl;
    cin>>c1>>c2;

    cout<<"Largest integer between "<<i1<<" & "<<i2<<" is "<<Large<int>(i1,i2)<<endl;
    cout<<"Largest float between "<<f1<<" & "<<f2<<" is "<<Large<float>(f1,f2)<<endl;
    cout<<"Largest character between "<<c1<<" & "<<c2<<" is "<<Large<char>(c1,c2)<<endl;
    
    return 0;
}