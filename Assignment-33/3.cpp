// 3. Using the concept of pointers, write a function that swaps the private data values of two
// objects of the same class type.

#include<iostream>
using namespace std;

class A
{
    int num1;

    public:
        A(int n)
        {
            num1 = n;
        }

        void show()
        {
            cout<<"Value = "<<num1<<endl;
        }

        void swap(A *n2)
        {
            int temp;
            temp = num1;
            num1 = n2->num1;
            n2->num1 = temp;
        }
};

int main()
{
    A a(5);
    a.show();

    A b(10);

    A *ptr = &b;
    b.show();

    a.swap(ptr);
    cout<<"After Swapping"<<endl;

    a.show();
    b.show();
    return 0;
}