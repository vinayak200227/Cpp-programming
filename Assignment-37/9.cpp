// 9. Write a c++ program to demonstrate the implementation of multimap

#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> myMultimap;
    // Note that a multimap allows multiple elements with the same key.

    // Inserting key-value pairs into the multimap
    myMultimap.insert(make_pair(1, "Apple"));
    myMultimap.insert(make_pair(2, "Banana"));
    myMultimap.insert(make_pair(2, "Blueberry"));
    myMultimap.insert(make_pair(3, "Cherry"));
    myMultimap.insert(make_pair(3, "Coconut"));

    cout << "Multimap contents:" << endl;
    for (auto &pair : myMultimap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}
