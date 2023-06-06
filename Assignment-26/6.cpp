// 6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.

#include<iostream>
using namespace std;
#include<cstring>

class student
{
    char name[20];
    int marks;

    public:
        student(char n[],int m)
        {
            strcpy(name, n);
            marks = m;

        }

        void show()
        {
            cout<<"Name = "<<name<<", Marks = "<<marks<<endl;
        }
};
int main()
{
    student s("Vinayak",99);
    s.show();
    return 0;
}