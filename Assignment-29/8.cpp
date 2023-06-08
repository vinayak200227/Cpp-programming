// 8. Create a Rupee class and convert it into int. And Display it.

// Example-
// int main()

// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }

#include<iostream>
using namespace std;

class Rupee
{
    public:
        int r;
        Rupee(int a)
        {
            r = a;
        }

        operator int()
        {
            return r;
        }
};
int main()
{
        Rupee r = 10;
        int x = r;   // int --> Rupee
        cout<<x;
        return 0;
}