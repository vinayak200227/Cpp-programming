// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

class counter
{
    static int count;
    public:
        counter()
        {
            count++;
        }

        int get_count()
        {
            return count;
        }
};

int counter::count;

int main()
{
    counter c1, c2, c3;

    cout<<c1.get_count();
    return 0;
}