// 7. Write a C++ program to accept a username if the username has less than 6 characters or does contain any digit or special symbol.

#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter name : "<<endl;
    cin>>name;

    int length = 0;

    for(int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    try
    {
        if(length < 6)
        {
            throw 1;
        }
        for(int i = 0; name[i] != '\0'; i++)
        {
            if(isdigit(name[i]))
            {
                throw 2;
            }
            if(!isalpha(name[i]))
            {
                throw 3;
            }
        }
        cout << "Valid username" << endl;
    }
    catch(int num)
    {
        if(num == 1)
        {
            cout<<"ERROR: User name has less than 6 characters"<<endl;
        }
        else if(num == 2)
        {
            cout<<"ERROR: Username contains digit"<<endl;
        }
        else{
            cout<<"ERROR: Username contains special symbol"<<endl;
        }
    }
    
    return 0;
}