// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill
{
    int c_no;
    char c_name[20];
    int units;
    double bill;
    public:
        void get()
        {
            cout<<"Enter customer no. "<<endl;
            cin>>c_no;
            cout<<"Enter customer name "<<endl;
            cin>>c_name;
            cout<<"Enter No. of units used  "<<endl;
            cin>>units;
        }

        void calculate()
        {
            if(units <= 100)
                bill = units*1.20;
            else if(units <=200)
                bill = 100*1.20 + (units -100)*2;
            else 
                bill = 100*1.20 + (units -100)*2 + (units - 200)*3;
        }

        void show()
        {
            cout << "Total electricity bill is " << bill << endl;
        }

};
int main()
{
    Bill b1;
    b1.get();
    b1.calculate();
    b1.show();
    
    return 0;
}