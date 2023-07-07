// 10. Write a c++ program to demonstrate functionality of unordered_map.

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> Map;
    // Note that the elements in the unordered_map are not sorted based on the keys.
    //  the elements in an unordered_map container in C++ are stored in a random manner. 

    // Inserting key-value pairs into the unordered_map
    Map["Vinayak"] = 27;
    Map["Ankita"] = 5;
    Map["Vaibhav"] = 31;
    Map["Pari"] = 20;
    Map["Jay"] = 4;

    // Accessing values using keys
    cout << "Value of Vinayak: " << Map["Vinayak"] << endl;
    cout << "Value of Vaibhav: " << Map["Vaibhav"] << endl;

    // Modifying values using keys
    Map["Vinayak"] = 20;
    Map["Vaibhav"] = 21;

    cout << "Contents of the unordered_map:" << endl;
    for (const auto &pair : Map)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Checking if a key exists in the unordered_map
    string key = "Jay";
    if (Map.count(key) > 0)  
    {
        cout << key << " is present in the unordered_map." << endl;
    }
    else    // if count is 0
    {
        cout << key << " is not present in the unordered_map." << endl;
    }

    return 0;
}
