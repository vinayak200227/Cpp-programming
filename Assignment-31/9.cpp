// 9. Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.

#include<iostream>
using namespace std;

class Student
{
    protected:
        int id;
        char name[15];

};

class StudentExam : public Student
{
    protected:
        int m1,m2,m3,m4,m5;

    public:
        void setData()
        {
            cout<<"Enter id : ";
            cin>>id;
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter marks of subject 1 : ";
            cin>>m1;
            cout << "Enter marks of subject 2 : ";
            cin >> m2;
            cout << "Enter marks of subject 3 : ";
            cin >> m3;
            cout << "Enter marks of subject 4 : ";
            cin >> m4;
            cout << "Enter marks of subject 5 : ";
            cin >> m5;
            cout<<endl<<endl;
        }
};

class StudentResult: public StudentExam
{
    float percentage;

    public:
        void find_percentage()
        {
            percentage = (m1 + m2 + m3 + m4 + m5)/5.0;
        }

        void display()
        {
            cout<<"Roll No. : "<<id<<endl;
            cout<<"Name pf student : "<<id<<endl;
            cout<<endl;
            cout<<"Marks of subject 1 : "<<m1<<endl;
            cout<<"Marks of subject 2 : "<<m2<<endl;
            cout<<"Marks of subject 3 : "<<m3<<endl;
            cout<<"Marks of subject 4 : "<<m4<<endl;
            cout<<"Marks of subject 5 : "<<m5<<endl;
            cout<<endl;
            cout<<"Percentage : "<<percentage<<endl;
            cout<<endl<<endl;
        }
};


int main()
{
    int n;
    cout<<"Enter number of Students "<<endl;
    cin>>n;
    StudentResult s[n];

    for(int i = 0; i<n; i++)
    {
        s[i].setData();
        s[i].find_percentage();
    }
    for(int i = 0; i<n; i++)
    {
        s[i].display();
    }
    return 0;
}