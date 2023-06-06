// 7. Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.

#include<iostream>
using namespace std;

class box
{
    double l, b, h;
    double volume;

    public:
        box(int x, int y, int z)
        {
            l=x;
            b=y;
            h = z;
        }

        void voulme()
        {
            cout<<"volume of box having l = "<<l<<" b = "<<b<<" h = "<<h<<" is "<< l*b*h<<endl;
        }
};
int main()
{
    box b1(3,5,3), b2(7,4,3);

    b1.voulme();
    b2.voulme();
    return 0;
}