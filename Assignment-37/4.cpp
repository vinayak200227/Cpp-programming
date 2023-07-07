// 4. Using inbuilt function and insert an element to the set container.

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> mySet;

    // Insert elements in random order
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(50);
    mySet.insert(20);
    mySet.insert(40);

    // Set stores elements in a asorted order

    // Print the elements in the set (sorted order)
    cout << "Elements in the set (sorted order): ";
    for (int element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
