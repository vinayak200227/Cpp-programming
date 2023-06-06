// 5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include<iostream>
using namespace std;

class ReverseNumber
{
    int num, reverse;

    public:
        ReverseNumber(int x)
        {
            num = x;
        } 

        void findReverse()
        {
            int n = num;
            reverse = 0;
            while(n)
            {
                reverse = reverse * 10 + n % 10;
                n= n / 10;
            }
        }

        void print()
        {
            cout<<"Reverse of "<<num<<" is "<<reverse<<endl;
        }
};
int main()
{
    ReverseNumber r(8563425);
    r.findReverse();
    r.print();
    return 0;
}