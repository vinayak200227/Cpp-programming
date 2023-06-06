// 8. Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;

class Rectangle
{
    int area, l, b;

    public:
        Rectangle(int x, int y)
        {
            l = x;
            b = y;
        }

        void Area()
        {
            area = l * b;
        }

        void print()
        {
            cout<<"Area of rectangle is "<<area<<endl;
        }
};
int main()
{
    Rectangle r(20,10);
    r.Area();
    r.print();

    return 0;
}