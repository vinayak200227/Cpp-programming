// 8. Create a map, where insert keys and values as string type and integer type respectively and print it on the screen.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> Map;

    Map["Vinayak"] = 27;
    Map["Ankita"] = 5;
    Map["Vaibhav"] = 31;
    Map["Pari"] = 20;
    Map["Jay"] = 4;

    for (auto it = Map.begin(); it != Map.end(); ++it)
    {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}