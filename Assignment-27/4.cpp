// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) 
    {
        
    }

    friend bool operator==(const Time t1, const Time t2);
    friend istream &operator>>(istream &in, Time &time);
    friend ostream &operator<<(ostream &out, const Time &time);
};

bool operator==(const Time t1, const Time t2)
{
    return (t1.hours == t2.hours) && (t1.minutes == t2.minutes) && (t1.seconds == t2.seconds);
}

istream &operator>>(istream &in, Time &time)
{
    cout << "Enter the time (HH:MM:SS): ";
    in >> time.hours;
    in >> time.minutes;
    in >> time.seconds;
    return in;
}

ostream &operator<<(ostream &out, const Time &time)
{
    out << "Time: " << time.hours << ":" << time.minutes << ":" << time.seconds;
    return out;
}

int main()
{
    Time t1, t2;

    cout << "Enter the first time:\n";
    cin >> t1;

    cout << "Enter the second time:\n";
    cin >> t2;

    cout << "\nFirst Time: " << t1 << endl;
    cout << "Second Time: " << t2 << endl;

    if (t1 == t2)
    {
        cout << "The two times are the same." <<endl;
    }
    else
    {
        std::cout << "The two times are different." <<endl;
    }

    return 0;
}
