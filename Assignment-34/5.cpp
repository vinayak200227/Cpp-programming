// 5. Write a C++ program to merge the two files.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin1("5file1.txt");
    ifstream fin2("5file2.txt");
    ofstream fout("5mergedFile.txt");

    if (!fin1)
    {
        cerr << "Error opening the first file." << endl;
        return 1;
    }

    if (!fin2)
    {
        cerr << "Error opening the second file." << endl;
        return 1;
    }

    if (!fout)
    {
        cerr << "Error creating the merged file." << endl;
        return 1;
    }

    char ch;

    // Copy contents of the first file to the merged file
    while (fin1.get(ch))
    {
        fout << ch;
    }

    // Copy contents of the second file to the merged file
    while (fin2.get(ch))
    {
        fout << ch;
    }

    fin1.close();
    fin2.close();
    fout.close();

    cout << "Files merged successfully." << endl;

    return 0;
}
