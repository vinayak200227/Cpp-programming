// 4. Create a base class called shape. Use this class to store 2 double type values that could
// be used to compute the area of figures. Derive 2 specific classes called triangle and rectangle
// from the base shape. Add to the base class a member function get_data() to initialise base
// class data members and another member function display_area() to compute and display the
// area of figures. Make display_area() as a virtual function and redefine this function in derived
// classes to suit their requirements. Using these 3 classes, design a program that will accept the
// dimensions of the shapes interactively and display area.

#include <iostream>
using namespace std;

class Shape
{
protected:
    double l1, l2;

public:
    void set_data(double x, double y)
    {
        l1 = x;
        l2 = y;
    }

    virtual void display_area() = 0;
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        double area = 0.5 * l1 * l2;
        cout << "Area of Traingle = " << area << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        double area = l1 * l2;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r;
    r.set_data(4, 5);
    r.display_area();

    Triangle t;
    t.set_data(4, 5);
    t.display_area();

    return 0;
}