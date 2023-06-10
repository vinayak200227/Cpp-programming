// 9. Create a base class called volume. Use this class to store two double type values that
// could be used to compute the volume of figures. Derive two specific classes called cube and
// sphere from the base shape. Add to the base class, a member function get_data() to initialise
// base class data members and another member function display_volume() to compute and
// display the volume of figures. Make display_volume() as a virtual function and redefine this
// function in the derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a cube or a
// sphere interactively, and display the volume.

#include <iostream>
using namespace std;
#include <cmath>

class Volume
{
protected:
    double length;
    double breadth;

public:
    void get_data(int a, int b = 0)
    {
        length = a;
        breadth = b;
    }

    virtual void display_volume()
    {
        cout << "Volume: 0" <<endl;
    }
};

class Cube : public Volume
{
public:
    void display_volume()
    {
        double volume = length * breadth * breadth;
        cout << "Cube Volume: " << volume <<endl;
    }
};

class Sphere : public Volume
{
public:
    void display_volume()
    {
        double radius = length / 2;
        double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
        cout << "Sphere Volume: " << volume <<endl;
    }
};

int main()
{
    Cube c;
    c.get_data(5,4);
    c.display_volume();
    cout<<endl;

    Sphere s;
    s.get_data(8);
    s.display_volume();

    return 0;
}