// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int x, int y, int z = 0)  // Default argument
{
    return x + y + z;
}
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(1,2,3);
    
    return 0;
}