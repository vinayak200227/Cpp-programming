// 6. Inserts an element.And returns an iterator that points to the first of the newly inserted elements.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {10, 20, 30};

    // Insert an element and get an iterator pointing to it
    auto it = myVector.insert(myVector.begin() + 1, 15);

    // Print the vector elements
    for (int element : myVector)
    {
        cout << element << " ";
    }
    cout << endl;

    // Print the value of the inserted element using the iterator
    cout << "Inserted element: " << *it << endl;

    return 0;
}
