// 2. Write a C++ program to read a text file and count the number of characters in it.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("2example.txt");

    if (!fin)
    {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    int count = 0;
    char ch;

    while (fin.get(ch))
    {
        count++;
    }

    fin.close();

    cout << "Number of characters: " << count << endl;

    return 0;
}
