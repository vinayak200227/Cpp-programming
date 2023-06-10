// 10. Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called square and
// parallelogram from the base shape. Add to the base class, a member function get_data() to
// initialise base class data members and another member function display_area() to compute and
// display the area of figures. Make display_area() as a virtual function and redefine this function in
// the derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a square or
// a parallelogram interactively, and display the area.

#include <iostream>
using namespace std;

class Shape
{
protected:
    double base;
    double height;

public:
    void get_data()
    {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }

    virtual void display_area()
    {
        cout << "Area: 0" << endl;
    }
};

class Square : public Shape
{
public:
    void display_area()
    {
        double area = base * base;
        cout << "Square Area: " << area << endl;
    }
};

class Parallelogram : public Shape
{
public:
    void display_area()
    {
        double area = base * height;
        cout << "Parallelogram Area: " << area << endl;
    }
};

int main()
{
    Shape *figure;
    char choice;

    cout << "Select figure (S for square, P for parallelogram): ";
    cin >> choice;

    if (choice == 'S' || choice == 's')
    {
        figure = new Square();
    }
    else if (choice == 'P' || choice == 'p')
    {
        figure = new Parallelogram();
    }
    else
    {
        cout <<"Invalid choice." << endl;
        return 0;
    }

    figure->get_data();
    figure->display_area();

    delete figure;
    return 0;
}
