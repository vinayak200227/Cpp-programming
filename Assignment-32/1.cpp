// 1. Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they can operate on the objects of FLOAT.

#include<iostream>
using namespace std;

class FLOAT
{
    float f;
    public:
    FLOAT(float f)
    {
        this->f = f;
    }

    float operator+(FLOAT t)
    {
        return f + t.f;
    }

    float operator-(FLOAT t)
    {
        return f - t.f;
    }

    float operator*(FLOAT t)
    {
        return f * t.f;
    }

    float operator/(FLOAT t)
    {
        return f / t.f;
    }


};

int main()
{
    FLOAT f1(5.0);
    FLOAT f2(2.5);
    float sum = f1 + f2;
    cout<<"Sum = "<<sum<<endl;
    float Difference = f1 - f2;
    cout<<"Difference = "<<Difference<<endl;
    float Product = f1 * f2;
    cout <<"Product = " << Product << endl;
    float Division = f1 / f2;
    cout <<"Division  = " << Division << endl;
    return 0;
}