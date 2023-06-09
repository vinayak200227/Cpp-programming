// 5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.

#include<iostream>
using namespace std;

int main()
{
    long long mobile_num, count = 0;

    cout<<"Enter mobile number"<<endl;
    cin>>mobile_num;

    try
    {
        while(mobile_num)
        {
            mobile_num = mobile_num /10;
            count++;
        }

        if(count == 10)
            throw 1;
        if(count != 10)
            throw 2;
    }

    catch(int num)
    {
        if(num == 1)
            cout<<"Valid mobile number"<<endl;
        if(num == 2)
            cout <<"Invalid mobile number"<<endl;
    }

    return 0;
}