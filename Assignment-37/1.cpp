// 1. Write a c++ program, to demonstrate priority queue.

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> Quee;

    Quee.push(10);
    Quee.push(20);
    Quee.push(50);
    Quee.push(40);
    Quee.push(30);

    while(!Quee.empty())
    {
        cout<<Quee.top()<<endl;
        Quee.pop();
    }

    return 0;
}