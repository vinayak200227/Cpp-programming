// 2. Write a C++ program to convert Complex type to Primitive type.
// Example -
// int main()
// {
// Complex c1;
// c1.setData(3,4);
// int x;
// x=c1;
// return 0;
// }

#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void display()
    {
        cout << real <<" + "<< img << "i" << endl;
    }

    complex(int x, int y)
    {
        real = x;
        img = y;
    }

    operator int()
    {
        cout<<"Int() called"<<endl;
        return (real+ img);
    }
};
int main()
{
    complex c(5,6);

    int x = c;
    c.display();
    cout<<"x = "<<x<<endl;
    return 0;
}