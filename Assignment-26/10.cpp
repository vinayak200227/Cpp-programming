// 10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.

#include <iostream>
using namespace std;

class counter
{
    static int count;

public:
    void inc_counter()
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
    counter c1, c2;
    c1.inc_counter();
    c2.inc_counter();
    c1.inc_counter();

    cout << c1.get_count();
    return 0;
}