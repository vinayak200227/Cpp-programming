// 3. Find the total number of elements of the set container.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> mySet = {10, 20, 30, 40, 50};

    int totalElements = mySet.size();

    cout << "Total number of elements: " << totalElements << endl;

    return 0;
}
