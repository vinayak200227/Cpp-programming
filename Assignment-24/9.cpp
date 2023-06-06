// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

void max(int x, int y)
{
    int max;
    max = x > y ? x : y;
    cout<<"Maximum number is "<<max<<endl;
}

void max(double x, double y)
{
    double max;
    max = x > y ? x : y;
    cout << "Maximum number is " << max << endl;
}

int main()
{
    max(2,4);
    max(3.0, 6.7);
    
    return 0;
}