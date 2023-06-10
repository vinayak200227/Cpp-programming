#include <iostream>
using namespace std;
#include <cmath>

class Shape
{
protected:
    double area;

public:
    Shape()
    {
        area = 0;
    }

    double getArea()
    {
        return area;
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h)
    {
        calculateArea();
    }

    void calculateArea()
    {
        area = 0.5 * base * height;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w)
    {
        calculateArea();
    }

    void calculateArea()
    {
        area = length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r)
    {
        calculateArea();
    }

    void calculateArea()
    {
        area = M_PI * pow(radius, 2);
    }
};

int main()
{
    int choice;
    double base, height, length, width, radius;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Calculate area of Triangle" << endl;
        cout << "2. Calculate area of Rectangle" << endl;
        cout << "3. Calculate area of Circle" <<endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter base and height of the Triangle: ";
            cin >> base >> height;
            Triangle triangle(base, height);
            cout << "Area of the Triangle: " << triangle.getArea() << endl;
            break;
        }
        case 2:
        {
            cout << "Enter length and width of the Rectangle: ";
            cin >> length >> width;
            Rectangle rectangle(length, width);
            cout << "Area of the Rectangle: " << rectangle.getArea() << endl;
            break;
        }
        case 3:
        {
            cout << "Enter radius of the Circle: ";
            cin >> radius;
            Circle circle(radius);
            cout << "Area of the Circle: " << circle.getArea() <<endl;
            break;
        }
        case 4:
        {
            cout << "Exiting the program. Goodbye!" <<endl;
            return 0;
        }
        default:
            cout << "Invalid choice. Please try again." <<endl;
            break;
        }

        cout << endl;
    }

    return 0;
}
