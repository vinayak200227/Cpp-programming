// 1. Write a C++ program to create a file and print “File created successfully” and throw an
// error if file is not created.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fout("1example.txt", ios::out);

    if (fout.is_open())
    {
        cout << "File created successfully." <<endl;
        fout<<"Hello";
        fout<<"World";
        fout.close();
    }
    else
    {
        cerr << "Error creating the file." <<endl;
        throw runtime_error("Failed to create the file.");
    }

    return 0;
}
