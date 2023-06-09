// 8. Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.

#include <iostream>
using namespace std;
#include <cctype> // for isdigit() and isupper() functions

bool isValidPassword(const string &password)
{
    if (password.length() < 6)
    {
        throw length_error("Password must have at least 6 characters");
    }

    bool hasDigit = false;
    bool hasSpecialChar = false;
    bool hasUpperCase = false;

    for (char ch : password)
    {
        if (isdigit(ch))
        {
            hasDigit = true;
        }
        else if (!isalnum(ch))
        {
            hasSpecialChar = true;
        }
        else if (isupper(ch))
        {
            hasUpperCase = true;
        }
    }

    if (!hasDigit)
    {
        throw invalid_argument("Password must contain at least one digit");
    }

    if (!hasSpecialChar)
    {
        throw invalid_argument("Password must contain at least one special character");
    }

    if (!hasUpperCase)
    {
        throw invalid_argument("Password must contain at least one uppercase letter");
    }

    return true; // password is valid
}

int main()
{
    string password;

    try
    {
        cout << "Enter a password: ";
        cin >> password;

        isValidPassword(password);

        cout << "Valid password!" << endl;
    }
    catch (const exception &ex)
    {
        cerr << "Invalid password: " << ex.what() << endl; // The cerr in c++ is a standard output stream for errors. It is basically used to print some information or error on the console.
    }

    return 0;
}
