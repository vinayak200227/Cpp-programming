// 8. Write a C++ Program to implement push and pop methods from stack using template.

#include<iostream>
using namespace std;

template<class T=int>
class stack
{
    int top = -1;
    int SIZE = 5;
    T arr[];
   
   public:
    bool isEmpty()
    {
        if (top == -1)
        {

            return true;
        }
        else{
            return false;
        }
    }

    bool isFull()
    {
        if (top == SIZE - 1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void push(T a)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        top = top + 1;
        arr[top] = a;
    }

    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        T temp = arr[top];
        top--;

        return temp;
    }

};

int main()
{
    stack<int> s1;
    s1.push(21);
    s1.push(22);
    s1.push(23);
    s1.push(24);
    s1.push(25);
    s1.push(26);
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;

    cout<<"-----------------------------"<<endl;

    stack<char> s2;
    s2.push('A');
    s2.push('B');
    s2.push('C');
    s2.push('D');
    s2.push('E');
    s2.push('F');
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    return 0;
}