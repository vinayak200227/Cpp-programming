// 2. Write a C++ program to demonstrate try, throw and catch statements.

#include<iostream>
using namespace std;

int main()
{
    try 
    {
        throw 1;
    }
    catch(char e)
    {
        cout<<"Exception caught"<<e<<endl;
    }
    catch(...)
    {
        cout<<"Other Exception"<<endl;
    }
    return 0;
}