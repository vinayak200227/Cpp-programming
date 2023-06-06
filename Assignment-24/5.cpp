// 5. Define a function to check whether a given number is a term in a Fibonacci series or not .

#include<iostream>
using namespace std;

bool isFibonacci(int num)
{
    int a = 0, b = 1;

    while (b < num)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }

    if (b == num)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
        cout << num << " is a term in the Fibonacci series." << endl;
    else
        cout << num << " is not a term in the Fibonacci series." << endl;

    return 0;
}
