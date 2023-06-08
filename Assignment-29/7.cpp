// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
// Time t1(2,30);
// t1.display();
// Minute m1;
// m1.display();
// m1=t1 // Fetch minute from time
// t1.display();
// m1.display();
// return 0;
// }

#include<iostream>
using namespace std;

class Minute
{
    public:
        int minute;
        Minute() {}
        void display()
        {
            cout << "Min = " << minute << endl;
        }
};
class Time
{
    int hour;
    int min;

    public:
        Time() {}

        Time(int x, int y)
        {
            hour = x;
            min = y;
        }

        void display()
        {
            cout << "hours = " << hour << " min = " << min << endl;
        }

        operator Minute()
        {
            Minute m;
            m.minute = min;
            return m;
        }
};

int main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1=t1; // Fetch minute from time
    m1.display();

    return 0;
}