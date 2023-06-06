// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to set
// values for time and display values of time.

#include<iostream>
using namespace std;
class Time
{
    int hour, min, sec;
    public:
        Time(int h, int m, int s)
        {
            hour = h;
            min = m;
            sec = s;
        }

        void print()
        {
            cout<<"Time = "<<hour<<" : "<<min<<" : "<<sec<<endl;
        }
};
int main()
{
    Time t(5,45,30);
    t.print();   
    return 0;
}