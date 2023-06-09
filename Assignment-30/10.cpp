// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8 characters or does contain a digit or special symbol or space.

#include <iostream>
using namespace std;
#include <stdexcept>
#include <string>
#include <cctype>

bool isValidNickname(const string &nickname)
{
    if (nickname.length() > 8)
    {
        throw invalid_argument("Nickname should have at most 8 characters");
    }

    for (char c : nickname)
    {
        if (!isalpha(c))
        {
            throw invalid_argument("Nickname should contain only alphabetic characters");
        }
    }

    return true; // Nickname is valid
}

int main()
{
    string nickname;

    try
    {
        cout << "Enter a nickname: ";
        cin >> nickname;

        isValidNickname(nickname);

        cout << "Valid nickname!" <<endl;
    }
    catch (const exception &ex)
    {
        cerr << "Invalid nickname: " << ex.what() << endl;
    }

    return 0;
}
