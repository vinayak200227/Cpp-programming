// 4. Write a program to copy the contents of one text file to another while changing the case of every alphabet.

#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("4input.txt");
    ofstream fout("4output.txt");

    if (!fin)
    {
        cerr << "Error opening the input file." << endl;
        return 1;
    }

    if (!fout)
    {
        cerr << "Error opening the output file." << endl;
        return 1;
    }

    char ch;
    while (fin.get(ch))
    {
        if (isalpha(ch))
        {
            if (islower(ch))
            {
                ch = toupper(ch);
            }
            else
            {
                ch = tolower(ch);
            }
        }
        fout<<ch;
    }

    fin.close();
    fout.close();

    cout << "File copied successfully with case change." << endl;

    return 0;
}
