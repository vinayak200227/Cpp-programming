// 5. Create a c++ program using multiset and returns an iterator to the theoretical element
// that follows the last element in the multiset –> O(1)

#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> mySet = {10, 20, 30, 40, 50};

    // Get an iterator to the element that follows the last element
    auto lastElement = mySet.end();
    // Note that the iterator points to a location beyond the last element and does not point to a valid element itself.

        cout
        << "Iterator value: " << *lastElement << endl;

    return 0;
}
