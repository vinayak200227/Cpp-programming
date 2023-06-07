// 7. Create an Integer class and overload not operator for that class.

#include<iostream>
using namespace std;
class Interger
{
    int i;
    public:
        Interger(int x)
        {
            i = x;
        }

        int operator!()
        {
            return -i;
        }    
};
int main()
{
    Interger x = 10;
    cout<<!x<<endl;
    
    return 0;
}