// 10. Create a railways ticket counter and allot ticket to first come first take using c++ STL

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> ticketCounter;

    // Simulating customers arriving at the ticket counter
    ticketCounter.push(1);
    ticketCounter.push(2);
    ticketCounter.push(3);
    ticketCounter.push(4);
    ticketCounter.push(5);

    // Allotting tickets to customers
    while (!ticketCounter.empty())
    {
        int customer = ticketCounter.front();
        ticketCounter.pop();

        cout << "Allotting ticket to customer " << customer << endl;
    }

    return 0;
}
