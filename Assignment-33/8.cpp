// 8. Create a base class called proof. Use this class to store two int type values that could be
// used to prove that triangle is a right angled triangle. Create a class compute which will
// determine whether a triangle is a right angled triangle.
// Using these classes, design a program that will accept dimensions of a triangle, and display the result.
// (Summary: Prove that triangle is a right angled triangle using pythagoras theorem).

#include<iostream>
using namespace std;

class Proof
{
    public:
        int h, b, p;

        Proof(int h, int b, int p): h(h),b(b),p(p)
        {

        }
        void compute()
        {
            if(h*h == b*b + p*p)
                cout<<"Triangle is a right angled triangle."<<endl;
            else
                cout<<"Triangle is not a right angled triangle."<<endl;
        }
};

int main()
{
    int h,b,p;
    cout<<"Enter hypotenus of triangle: ";
    cin>>h;
    cout<<"Enter remaining two sides: ";
    cin>>b>>p;
    Proof f(h,b,p);
    f.compute();
    return 0;
}