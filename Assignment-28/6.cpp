// 6. Create a complex class and overload assignment operator for that class.

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
        cout << "Complex Number is " << real << " + " << img << "i" << endl;
    }

    Complex operator=(Complex c)
    {
        real = c.real;
        img = c.img;

        return c;
    }
};

int main()
{
    Complex c1, c2,c3;
    c1.setData(4, 6);
    c1.displayData();

    c2.setData(43, 64);
    c2.displayData();

    c3 = c1;
    c3.displayData();


    return 0;
}