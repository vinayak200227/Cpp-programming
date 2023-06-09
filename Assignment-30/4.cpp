// 4. Write a C++ program to accept an email address and throw an exception if it does not contain @symbol.

#include<iostream>
using namespace std;

bool isValideEmailId(char *email)
{
    int Atoffset = -1;
    int Dotoffset = -1;
    int length = 0;
    for(int i = 0; email[i] != '\0'; i++)
    {
        if(email[i] == '@')
            Atoffset = i;
        else if(email[i] == '.')
            Dotoffset = i;

        length++;
    }

    if(Atoffset == -1 || Dotoffset == -1)
        return 0;    // @ or . at last of string
    if(Atoffset > Dotoffset)
        return 0;  // if @ comes after .
    return (Dotoffset < (length - 2));  // after . there should be atleast 2 chars
}
int main()
{
    char email[100];

    cout<<"Enter Email Id"<<endl;
    // cin.get(email,20);
    cin>>email;

    try
    {
        if(isValideEmailId(email))
        {
            cout<<"Email Id is valid"<<endl;
        }
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Execption caught...\nInvalid Email Id"<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    
    return 0;
}