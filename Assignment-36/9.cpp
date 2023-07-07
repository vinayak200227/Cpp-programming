// 9. Create a stack of int type, and find the top most element in a stack.

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();

    cout<<"Top most element in stack = "<<s.top()<< endl;

    return 0;
}