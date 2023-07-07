// 7. Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning).

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> myDeque = {10, 20, 30, 40, 50};

    // Obtain a reverse iterator pointing to the last element
    auto rit = myDeque.rbegin();

    // Print the value of the last element using the reverse iterator
    cout << "Last element: " << *rit << endl;

    return 0;
}
