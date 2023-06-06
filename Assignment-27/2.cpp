// 2. Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>
using namespace std;

class Num 
{
    int n;
    public:
        void setNum(int x)
        {
            n = x;
        }

        void dispNum(void)
        {
            cout<<"value of n is: "<<n<<endl;
        }

        void operator++(void)  // pre increment
        {
            n = ++n;
        }

        void operator++(int)  // post increment (int is passed to just differentiate)
        {
            n = n++;
        }

        void operator--(void)
        {
            n = --n;
        }

        void operator--(int)
        {
            n = n--;
        }
};
int main()
{
    Num num;
    num.setNum(10);

    ++num;
    cout<<"After pre increment - ";
    num.dispNum();
    cout<<endl;

    num++;
    cout<<"After post increment - ";
    num.dispNum();
    cout<<endl;

    --num;
    cout<<"After pre decrement - ";
    num.dispNum();
    cout<<endl;

    num--;
    cout<<"After post decrement - ";
    num.dispNum();
    cout<<endl;
    
    return 0;
}