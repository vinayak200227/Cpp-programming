// 6. Write a C++ program to accept area pincode and throw an exception if it does not contain 6 digits.

#include <iostream>
using namespace std;

int main()
{
    long long pincode, count = 0;

    cout << "Enter pincode" << endl;
    cin >> pincode;

    try
    {
        while (pincode)
        {
            pincode = pincode / 10;
            count++;
        }

        if (count == 6)
            throw 1;
        if (count != 6)
            throw 2;
    }

    catch (int num)
    {
        if (num == 1)
            cout << "Valid pincode" << endl;
        if (num == 2)
            cout << "Invalid pincode" << endl;
    }
    catch (...)
    {
        cout << "Default Exception" << endl;
    }

    return 0;
}