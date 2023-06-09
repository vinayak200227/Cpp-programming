// 9. Write a C++ program to accept gmail id only and throw an exception if the id does not contain @ and gmail.com.

#include <iostream>
using namespace std;
#include <stdexcept>
#include <string>

bool isValidGmailId(const string &email)
{
    size_t atPosition = email.find("@");
    size_t dotPosition = email.find(".com");

    if (atPosition == -1 || dotPosition == -1 || atPosition > dotPosition)
    {
        throw invalid_argument("Invalid Gmail ID");
    }

    return true; // Gmail ID is valid
}

int main()
{
    string email;

    try
    {
        cout << "Enter a Gmail ID: ";
        cin >> email;

        isValidGmailId(email);

        cout << "Valid Gmail ID!" << endl;
    }
    catch (const exception &ex)
    {
        cerr << "Invalid Gmail ID: " << ex.what() << endl;
    }

    return 0;
}
