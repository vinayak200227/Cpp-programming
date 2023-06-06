// 10. Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.

#include <iostream>
using namespace std;

class Area
{
    int area, r,l,b;

public:
    Area(int x)
    {
        r = x;
    }

    Area(int x, int y)
    {
        l = x;
        b= y;
    }

    void AreaCircle()
    {
        area = 3.14 * r * r;
    }
    
    void AreaSquare()
    {
        area = r * r ;
    }

    void AreaRectangle()
    {
        area = l * b;
    }
    void print()
    {
        cout << "Area  is " << area << endl;
    }
};
int main()
{
    Area c(5), s(20), r(15,10);
    r.AreaRectangle();
    r.print();

    c.AreaCircle();
    c.print();

    s.AreaSquare();
    s.print();

    return 0;
}