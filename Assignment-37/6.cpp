// 6. Create a c++ program using multiset and returns an iterator to the first element in the multiset –> O(1)

#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> mySet = {10, 20, 30, 40, 50};

    // Get an iterator to the element that follows the last element
    auto firstElement = mySet.begin();

    cout << "Iterator value: " << *firstElement << endl;

    return 0;
}
