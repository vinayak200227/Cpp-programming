// 7. Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include <iostream>
using namespace std;

class Greatest
{
    int largestNum;
    int x, y, z;

public:
    Greatest(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void findlargestNumber()
    {
        largestNum = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    }

    void print()
    {
        cout << "Largest of " << x << " , " << y << " , " << z << " is " << largestNum << endl;
    }
};
int main()
{
    Greatest l(3, 5, 6);
    l.findlargestNumber();
    l.print();
    return 0;
}