// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int ) to Time class.

// Example-
// int main()
// {
// int duration;
// cout<<”Enter time duration in minutes”;
// cin>>duration;
// Time t1 = duration;
// t1.display();
// return 0;
// }

#include <iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;
    public:
        Time(){}
        
        Time(int duration)
        {
            hour = duration / 3600;
            min = (duration % 3600) / 60;
            sec = (duration % 3600) % 60;
        }

        void display()
        {
            cout<<"hours = "<<hour<<" min = "<<min<<" sec= "<<sec<<endl;
        }
};

int main()
{
        int duration;
        cout<<"Enter time duration in seconds"<<endl;
        cin>>duration;
        Time t1 = duration;
        t1.display();
        return 0;
}