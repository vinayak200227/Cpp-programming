// 7. Write a C++ Program of Templated class derived from Non - templated class.

#include <iostream>
using namespace std;

// Non-templated base class
class BaseClass
{
protected:
    int baseData;

public:
    BaseClass(int data) : baseData(data) {}

    void displayBaseData()
    {
        cout << "Base Data: " << baseData << endl;
    }
};

// Templated derived class
template <typename T>
class DerivedClass : public BaseClass
{
private:
    T derivedData;

public:
    DerivedClass(int baseData, T data) : BaseClass(baseData), derivedData(data) {}

    void displayDerivedData()
    {
        cout << "Derived Data: " << derivedData << endl;
    }
};

int main()
{
    DerivedClass<std::string> obj1(10, "Hello");
    obj1.displayBaseData();
    obj1.displayDerivedData();

    DerivedClass<double> obj2(20, 3.14);
    obj2.displayBaseData();
    obj2.displayDerivedData();

    return 0;
}
