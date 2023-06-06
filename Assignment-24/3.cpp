// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;
class power
{
    public:
        int x, y;
        void xPower()
        {
            int result = 1;
            int z = y;
            while(y != 0)
            {
                y --;
                result = result * x;
            }
            cout<<x<<" raise to "<<z<<" is "<<result<<endl;
        }
};
int main()
{
    power p;
    cout<<"Enter value for x and y"<<endl;
    cin>>p.x>>p.y;
    p.xPower();
    return 0;
}