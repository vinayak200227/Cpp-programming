// 7. Create a map, insert at least 5 pairs of keys and values and print it.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> Map;

    Map["Vinayak"] = 27;
    Map["Ankita"] = 5;
    Map["Vaibhav"] = 31;
    Map["Pari"] = 20;
    Map["Jay"] = 4;

    for(auto it = Map.begin(); it != Map.end(); ++it)
    {
        cout << it->first << " : " << it->second << endl;
    }

    cout<<"---------------------------------"<<endl;

    //elements are stored in a sorted order based on their keys. 
    // This allows for efficient lookup and retrieval of elements based on the keys.

    map<int, string> myMap;

    // Insert elements with keys in a random order
    myMap[30] = "Thirty";
    myMap[10] = "Ten";
    myMap[50] = "Fifty";
    myMap[20] = "Twenty";
    myMap[40] = "Forty";

    // Print the key-value pairs in the map (sorted order by key)
    cout << "Key-Value Pairs in the Map (Sorted Order):" << endl;
    for (const auto &pair : myMap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}