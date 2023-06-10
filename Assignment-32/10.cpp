// 10.Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of matches
// varies for each player. Write a parameterized constructor which initializes player no.,
// name, number of matches and creates an array for number of goals and number of
// matches dynamically.

#include <iostream>
using namespace std;

class Player
{
private:
    int playerNo;
    std::string name;
    int numMatches;
    int *numGoals;

public:
    Player(int playerNo, const std::string &name, int numMatches): playerNo(playerNo), name(name), numMatches(numMatches)
    {
        numGoals = new int[numMatches]; // Create dynamic array for number of goals
    }

    ~Player()
    {
        delete[] numGoals; // Deallocate dynamic array
    }

    void setGoals(int matchIndex, int goals)
    {
        if (matchIndex >= 0 && matchIndex < numMatches)
        {
            numGoals[matchIndex] = goals;
        }
        else
        {
            cout << "Invalid match index." <<endl;
        }
    }

    void displayStats()
    {
        cout << "Player No: " << playerNo <<endl;
        cout << "Name: " << name <<endl;
        cout << "Number of Matches: " << numMatches <<endl;
        cout << "Goals in each match:" <<endl;
        for (int i = 0; i < numMatches; i++)
        {
            std::cout << "Match " << i + 1 << ": " << numGoals[i] <<endl;
        }
    }
};

int main()
{
    int playerNo, numMatches;
    string name;

    cout<<"Enter player number: ";
    cin >> playerNo;
    cout << "Enter Player No: ";
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Number of Matches: ";
    cin >> numMatches;

    Player player(playerNo, name, numMatches);

    for (int i = 0; i < numMatches; i++)
    {
        int goals;
        cout << "Enter Goals for Match " << i + 1 << ": ";
        cin >> goals;
        player.setGoals(i, goals);
    }

    cout << endl;
    player.displayStats();

    return 0;
}
