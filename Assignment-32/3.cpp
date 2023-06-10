// 3. Define a base class Animals having member function sound() . Define another derived
// class from Animals class named Dogs. You need to override the sound function of the
// base class in the derived class.

#include<iostream>
using namespace std;

class Animal
{
    public:
        void sound()
        {
            cout<<"Animal sound"<<endl;
        }
};

class Dogs: public Animal
{
    public:
        void sound()
        {
            cout << "Bark!" << endl;
        }
};
int main()
{
    Dogs d;
    d.sound();
    return 0;
}