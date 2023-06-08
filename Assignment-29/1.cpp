// 1.Write a C++ program to convert Primitive type to Complex type.
// Example -
// int main()
// {
// Complex c1;
// Int x=5;
// c1=x;
// return 0;
// }

#include<iostream>
using namespace std;
class complex
{  
    int real, img;
    public:
        complex(int x)
        {
            real = x;
            img = x;
        }

        complex()
        {

        }
        void display()
        {
            std::cout << "Complex Number: " << real << " + " << img << "i" << std::endl;
        }

        // Conversion operator from int to Complex
        complex &operator=(int num)
        {
            real = num;
            img = 0.0;
            return *this;
        }
};
int main()
{
    complex c;
    int x = 5;
    c = x;   // int --> complex
    c.display();
    return 0;
}