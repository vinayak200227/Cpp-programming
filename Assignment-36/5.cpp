// 5. Write a c++ code, to demonstrate the forward list.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> myList;

    // Insert elements at the front of the list
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    // Iterate over the elements and print them
    for (int element : myList)
    {
        cout << element << " ";
    }
    cout << endl;

    // Insert an element after the first element
    auto it = myList.begin();
    ++it;
    myList.insert_after(it, 15);

    // Remove the second element
    it = myList.begin();
    ++it;
    myList.erase_after(it);

    // Print the updated list
    for (int element : myList)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
