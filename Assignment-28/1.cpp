// 1. Define a class Complex with appropriate instance variables and member functions. Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int img;

    Complex()
    {

    }
};

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part and imaginary part of complex number" << endl;
    in >> c.real;
    in >> c.img;
    return in;
}

ostream &operator<<(ostream &out, Complex &c)
{
    out << "Complex Number is " << c.real << " + " << c.img << "i" << endl;
    return out;
}

int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}