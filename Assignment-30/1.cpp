// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks.

#include<iostream>
using namespace std;

void test_try(int num)
{
    char *c = "String Handling";
        try
        {
            if (num >= 0 && num <= 9)
                throw num;
            else
                cout<<"\nIt is not a single number"<<endl;
            throw c;
        }
        catch(int a)
        {
            cout<<"It is a single number"<<endl;
        }
        catch(char b[100])
        {
            cout<<b;
        }
}

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    test_try(num);

    return 0;
}