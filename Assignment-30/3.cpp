// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator.

#include<iostream>
using namespace std;
int Addition(int a, int b)
{
    return a+b;
}
int main()
{
    float num1, num2, ans;
    char Operator;

    try
    {
        cout<<"Enter First number"<<endl;
        cin>>num1;

        cout<<"Enter operator"<<endl;
        cin>>Operator;

        if (Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/' )
        {
            throw Operator;
        }
            
        cout << "Enter Second number" << endl;
        cin>>num2;

        switch(Operator)
        {
            case '+':
                ans = num1 + num2;
                break;
            case '-':
                ans = num1 - num2;
                break;
            case '*':
                ans = num1 * num2;
                break;
            case '/':
                if(num2 == 0)
                    throw 0;
                ans = num1 / num2;
                break;
        }
        cout<<"Answer : "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans<<endl;
    }

    catch( const char c)
    {
        cout<<"Error: Invalid Operator..."<<endl;
    }
    catch(int n)
    {
        cout<<"Error: Bad Operation..."<<endl;
    }

    return 0;
}