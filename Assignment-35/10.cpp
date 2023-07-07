// 10. Write a C++ program to implement Hash Table using Template Class.

#include <iostream>
#include <unordered_map>

using namespace std;

template <typename KeyType, typename ValueType>
class HashTable
{
private:
    std::unordered_map<KeyType, ValueType> table;

public:
    void insert(const KeyType &key, const ValueType &value)
    {
        table[key] = value;
    }

    void remove(const KeyType &key)
    {
        table.erase(key);
    }

    ValueType find(const KeyType &key) const
    {
        auto it = table.find(key);
        return (it != table.end()) ? it->second : ValueType{};
    }
};

int main()
{
    HashTable<std::string, int> ht;

    ht.insert("Vaibhav", 22);
    ht.insert("Vinayak", 21);

    cout << "Vaibhav's age: " << ht.find("Vaibhav") << endl;
    cout << "Vinayak's age: " << ht.find("Vinayak") << endl;

    ht.remove("Vinayak");
    cout << "Vinayak's age: " << ht.find("Vinayak") << endl;

    return 0;
}
