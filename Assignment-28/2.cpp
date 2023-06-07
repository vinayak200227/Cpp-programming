// 2. Define a class Complex with appropriate instance variables and member functions. One
// of the functions should be setData() to set the properties of the object. Make sure the
// names of formal arguments are the same as names of instance variables.

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public:

        void setData(int real, int img)
        {
            this->real = real;
            this->img = img;
        }

        void displayData()
        {
            cout<<"Complex Number is "<<real<<" + "<<img<<"i"<<endl;
        }
};

int main()
{
    Complex c1,c2;
    c1.setData(4,6);
    c1.displayData();

    c2.setData(43,64);
    c2.displayData();

    return 0;
}