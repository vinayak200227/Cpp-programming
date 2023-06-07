// 5. Create a student class and overload new and delete operators outside the class.

#include <iostream>
using namespace std;

class student
{
    string name;
    int age;

public:
    student()
    {
        cout << "Default constructor is called" << endl;
    }

    student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }

    
};

void *operator new(size_t size) // new returns pointer and we don't know what type of pointer so void* is used
{
    cout << "Overloading new operator with size: " << size << endl;
    void *p = malloc(size);

    return p;
}

void operator delete(void *p) // we don't know what tupe of memory we have to delete so void* is used
{
    cout << "Overloading delete operator " << endl;
    free(p);
}

int main()
{
    student *p = new student("Vinayak", 20);

    p->display();

    delete p;

    return 0;
}