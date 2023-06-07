// 11. Create a class Marks that have one member variable marks and one member function
// that will print marks. We know that we can access member functions using (.) dot operator. Now
// you need to overload (->) arrow operator to access that function.

#include<iostream>
using namespace std;

class Marks
{
    int mark;
    public:
        Marks(int m)
        {
            mark = m;
        }
        void display()
        {
           cout<<"Marks = "<<mark<<endl;
        }

        Marks* operator->()
        {
            return this;
        }
};
int main()
{
    Marks m(50);
    m.display();
    m->display(); // we want this to work(By overloading arrow)
                  // for this m should work like pointer
    return 0;
}