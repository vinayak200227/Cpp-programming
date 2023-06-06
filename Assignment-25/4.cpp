// 4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.

#include<iostream>
using namespace std;

class largestNumber
{
    int largestNum;
    int x, y, z;
    public:
        largestNumber(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }

        void findlargestNumber()
        {
            largestNum = (x > y) ? (x > z ? x:z) : (y>z ? y:z);
        }

        void print()
        {
            cout<<"Largest of "<<x<<" , "<<y<<" , "<<z<<" is "<<largestNum<<endl;
        }
};
int main()
{
    largestNumber l(3,5,6);
    l.findlargestNumber();
    l.print();
    return 0;
}