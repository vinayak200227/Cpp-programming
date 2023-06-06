// 8. Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor.

#include<iostream>
using namespace std;

class bank
{
    float p,r,t,si,amount;

    public:
        void read()
        {
            cout<<"Enter Principle Amount "<<endl;
            cin>>p;
            cout<<"Enter rate of interest "<<endl;
            cin>>r;
            cout<<"Enter number of years "<<endl;
            cin>>t;

            si = (p*r*t)/100;

            amount = si + p;
        }

        void show()
        {
            cout<<"Principle amount = "<<p<<endl<<"rate = "<<r<<endl<<"years = "<<t<<endl<<"SI = "<<si<<endl<<"Amount = "<<amount<<endl;
        }
};
int main()
{
    bank b;
    b.read();
    b.show();   
    return 0;
}