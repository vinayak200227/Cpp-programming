// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
// Invent1 x(4,5);
// Invent2 y;
// float z;
// z = x; // Invent1 to float
// y = x; // Invent1 to Invent2
// return 0;
// }

#include<iostream>
using namespace std;

class Invent1
{
    
    public:
        float a, b;
        Invent1(int a, int b = 0):a(a),b(b)
        {

        }

        void display()
        {
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }
        operator float()
        {
            return a+b;
        }
};

class Invent2
{
    float x;
    public:
        Invent2(Invent1 i)
        {
            x = i.a + i.b;
        }
        void display()
        {
            cout << "x = "<<x<<endl;
        }
};
int main()
{
    Invent1 i1(4,5);
    Invent2 i2 = i1;  // i1 -> i2
    float z = i1;     // i1 -> float

    i1.display();
    i2.display();

    cout<<"z = "<<z<<endl;

    return 0;
}