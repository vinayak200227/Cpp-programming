// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class cube
{
    public:
        double side;
        
        cube(double x)
        {
            cout<<"constructor is called"<<endl;
            side = x;
        }

        double volume()
        {
            return(side*side*side);
        }

        cube()
        {
            cout<<"default constructor called"<<endl;
        }

        ~cube()
        {
            cout<<"Destructing "<<side<<endl;
        }
};
int main()
{
    cube c1(4.30);
    cube c2;
    c2.side = 3;

    cout<< "Volume of cube having side "<<c1.side<<" is "<<c1.volume()<<endl;
    cout<< "Volume of cube having side "<<c2.side<<" is "<<c2.volume()<<endl;
    return 0;
}