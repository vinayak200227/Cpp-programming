// Consider following class Numbers 
//class Numbers
// {

//     int x, y, z;

// public:
//     // methods
// };
// Overload the operator unary minus(-) to negate the numbers.

#include<iostream>
using namespace std;
class Numbers
{

    int x, y, z;

public:
    void accept(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }

    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    Numbers num;
    int x, y, z;
    cout<<"Enter 3 numbers "<<endl;
    cin>>x>>y>>z;
    num.accept(x,y,z);
    cout<<"Numbers are "<<endl;
    num.display();

    -num;
    cout<<"Numbers after negation are "<<endl;
    num.display();

    return 0;
}