// 5. Define a class Date and write a program to Display Date and initialise date object using Constructors.

#include<iostream>
using namespace std;

class date
{
    int dd, mm, yy;
    public:
        date(int x, int y, int z)
        {
            dd=x;
            mm=y;
            yy=z;
        }

        void display()
        {
            cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
        }
};
int main()
{
    date d1(30,1,2023);
    d1.display();
    
    return 0;
}