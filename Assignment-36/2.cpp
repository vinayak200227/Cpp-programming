// 2. Using STL Array returns the total number of elements in the array.

#include<iostream>
#include<array>
using namespace std;

int main()
{
    int c = 0;
    array<int, 9> a={1,2,3,4,5,6,7,8,9};
    for(auto i = a.begin();i != a.end(); i++)
    {
        c++;
    }

   cout<<"Total number of elements in array is "<<c<<endl;
    return 0;
}