// 9. Write a C++ Program to Perform Simple Addition Function Using Templates.

#include <iostream>

using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int num1 = 5;
    int num2 = 10;
    int sum1 = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " = " << sum1 << endl;

    double num3 = 2.5;
    double num4 = 3.7;
    double sum2 = add(num3, num4);
    cout << "Sum of " << num3 << " and " << num4 << " = " << sum2 << endl;

    return 0;
}
