// 2. Implement different operations on priority queue.i.e.adding element, removing element, size of priority queue, and print it.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> myQueue;

    // Adding elements to the priority queue
    myQueue.push(30);
    myQueue.push(10);
    myQueue.push(50);
    myQueue.push(20);
    myQueue.push(40);

    cout << "Size of Priority Queue: " << myQueue.size() << endl;

    // Print the elements of the priority queue
    cout << "Priority Queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.top() << " ";
        myQueue.pop();
    }
    cout << endl;

    myQueue.push(60);
    myQueue.push(15);

    cout << "Size of Priority Queue: " << myQueue.size() << endl;

    // Print the updated elements of the priority queue
    cout << "Updated Priority Queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.top() << " ";
        myQueue.pop();
    }
    cout << endl;

    // Check the size of the priority queue
    cout << "Size of Priority Queue: " << myQueue.size() << endl;

    return 0;
}
