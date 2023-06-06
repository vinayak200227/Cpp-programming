// 9. Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
using namespace std;

class Circle
{
    int area, r;

public:
    Circle(int x)
    {
        r = x;
    }

    void Area()
    {
        area = 3.14 * r * r;
    }

    void print()
    {
        cout << "Area of circle is " << area << endl;
    }
};
int main()
{
    Circle r(20);
    r.Area();
    r.print();

    return 0;
}