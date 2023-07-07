// 4. Declare a vector without initialization, insert some elements and print

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for (auto it : v)
    {
        cout << it << endl;
    }

    return 0;
}