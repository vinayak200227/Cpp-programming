// 6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    static int count;
    int i;
    int sq;

    public:
        Square(int x)
        {
            i = x;
        }

        void findSquare()
        {
            count++;
            sq = i * i;
        }

        void print()
        {
            cout<<"Square of "<<i<<" is "<<sq<<endl;
        }

        void printCount()
        {
            cout<<"count = "<<count<<endl;
        }
};

int Square::count = 0;  // if we have used any static variable in class it must be initialized by 0 outside class in this format.

int main()
{
    Square a(5);
    Square b(6);

    a.findSquare();
    b.findSquare();

    a.print();
    b.print();

    a.printCount();
    
    return 0;
}