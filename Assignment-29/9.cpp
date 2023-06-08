// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

// Example-
// int main()
// {
// int x = 50;
// Dollar d;
// d = x;
// d.display();
// return 0;
// }

#include<iostream>
using namespace std;

class Dollar
{
    public:
        int d;
        
        Dollar(){}
        Dollar(int a)
        {
            d = a;
        }
        
        void display()
        {
            cout<<"Dollar = "<<d<<endl;
        }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;  // int --> dollar
    d.display();
    return 0;
        return 0;
}