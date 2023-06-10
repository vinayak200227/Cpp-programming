// 2. Extend the above program to display the area of circles. This requires the addition of a
// new derived class 'circle' that computes the area of a circle. Remember, for a circle we need
// only one value, its radius, but the set_data() function in the base class requires two values to be
// passed. (Hint: Make the second argument of set_data() function as a default one with zero
// value.)

#include <iostream>
using namespace std;

class Shape
{
protected:
    double l1, l2;

public:
    void set_data(double x, double y = 0)
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

class Circle : public Shape
{
    public:
        void display_area()
        {
            double area = 3.14 * l1 * l1;
            cout<<"Area of circle = "<<area<<endl;
        }
};

int main()
{
    Rectangle r;
    r.set_data(4, 5);
    r.display_area();

    Triangle t;
    t.set_data(4,5);
    t.display_area();

    Circle c;
    c.set_data(5);
    c.display_area();
    
    return 0;
}