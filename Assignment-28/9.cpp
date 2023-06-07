// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include<iostream>
using namespace std;

class Integer
{
    int x;
    public:
        Integer(int a)  // int --> Integer
        {
            x = a;
        }
        operator int()  // integer --> int
        {
            return x;
        }

};

int main()
{
//    Integer x(5);
   Integer x = 5;

   int y = x;  // Integer --> int

   cout<<y<<endl;


    return 0;
}