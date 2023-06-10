// 3. Write a C++ program to open an output file 'a.txt' and append data to it.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("3a.txt", ios::app);

    if (!fout)
    {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string data;
    cout << "Enter data to append: ";
    getline(cin, data);

    fout << data << endl;

    fout.close();

    cout << "Data appended successfully." << endl;

    return 0;
}
