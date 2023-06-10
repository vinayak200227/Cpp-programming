// 2. Define a class Rectangle and overload area function for different types of data type.

#include<iostream>
using namespace std;

class Rectangle
{
public:
    int area(int length, int width)
    {
        return length * width;
    }

    double area(double length, double width)
    {
        return length * width;
    }
};

int main()
{
    Rectangle rectangle;

    int lengthInt = 5;
    int widthInt = 3;
    int areaInt = rectangle.area(lengthInt, widthInt);
    cout << "Area (int): " << areaInt << endl;

    double lengthDouble = 4.5;
    double widthDouble = 2.5;
    double areaDouble = rectangle.area(lengthDouble, widthDouble);
    cout << "Area (double): " << areaDouble << endl;

    return 0;
}
