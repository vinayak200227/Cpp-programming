// 3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.

#include<iostream>
using namespace std;

class Factorial
{
    int fact;
    int num;

    public:
        Factorial(int n)
        {
            num = n;
        }

        void factorial()
        {
            fact = 1;
            for(int i = 1; i<=num; i++)
                fact = fact*i;
        }
        void print()
        {
            cout<<"Factorial of "<<num<<" is "<<fact<<endl;
        }

};
int main()
{
    Factorial f(3);
    f.factorial();
    f.print();
    return 0;
}