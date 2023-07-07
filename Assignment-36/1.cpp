// 1. Using STL Array gets and sets a reference to an element based on a given index.

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Get a reference to an element based on index
    int &elementRef = myArray.at(2);

    // Print the element value
    cout << "Element at index 2: " << elementRef << endl;

    // Modify the element value using the reference
    elementRef = 10;

    // Print the updated element value
    cout << "Updated element at index 2: " << myArray.at(2) << endl;

    return 0;
}
