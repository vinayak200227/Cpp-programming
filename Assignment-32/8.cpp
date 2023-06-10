// 8. Write a C++ program to find the factorial of a number using copy constructor

#include <iostream>
using namespace std;

class Factorial
{
private:
    int num;

public:
    Factorial(int n)
    {
        num = n;
    }

    Factorial(const Factorial &obj)
    {
        num = obj.num;
    }

    int calculateFactorial()
    {
        int factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Factorial obj1(number);
    Factorial obj2 = obj1; // Copy constructor called

    int result = obj2.calculateFactorial();
    cout << "Factorial of " << number << " is: " << result <<endl;

    return 0;
}