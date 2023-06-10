// 4. Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.

#include<iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Addition addition;

    int sum1 = addition.add(2, 3);
    cout << "Sum of 2 numbers (int): " << sum1 <<endl;

    float sum2 = addition.add(2.5f, 3.5f);
    cout << "Sum of 2 numbers (float): " << sum2 <<endl;

    double sum3 = addition.add(2.8, 3.9);
    cout << "Sum of 2 numbers (double): " << sum3 <<endl;

    int sum4 = addition.add(2, 3, 4);
    cout << "Sum of 3 numbers (int): " << sum4 <<endl;

    return 0;
}
