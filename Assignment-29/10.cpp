// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.

// Example-
// int main()
// {
// Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
// return 0;
// }

#include<iostream>
using namespace std;
class Rupee
{
public:
    double r;
    Rupee(double a)
    {
        r = a;
    }

    void display()
    {
        cout << "Rupee = " << r << endl;
    }
};

class Dollar
{
public:
    double d;

    Dollar() {}
    Dollar(double a)
    {
        d = a;
    }

    void display()
    {
        cout << "Dollar = " << d << endl;
    }

    Dollar(Rupee a)  // for Rupee --> Dollar
    {
        d = a.r * 0.012;
    }

    operator Rupee()  // for Dollar --> Rupee
    {
        return d * 82.51;
    }
};

int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d;      // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}