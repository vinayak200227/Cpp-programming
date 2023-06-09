// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
// Write necessary member functions.

#include<iostream>
using namespace std;

class worker
{
    public:
        int code;
        char name[10];
        float salary;

        void set_w()
        {
            cout<<"Enter code "<<endl;
            cin>>code;
            cout<<"Enter name "<<endl;
            cin>>name;
            cout<<"Enter salary "<<endl;
            cin>>salary;
        }

        void display()
        {
            cout<<"code = "<<code<<" name= "<<name<<" salary= "<<salary<<endl;
        }
};
class officer
{
    public:
        float HA, DRA;

        void set_o()
        {
            cout<<"Enter HA"<<endl;
            cin>>HA;
            cout<<"Enter DRA"<<endl;
            cin>>DRA;
        }

        void display()
        {
            cout<<"HA= "<<HA<<" DRA= "<<DRA<<endl;
        }
};

class manager :public worker, public officer
{
    public:
        float TA = (10 * salary) / 100;
        float gross_salary = TA + salary + HA + DRA;

        void dispaly()
        {
            cout << "code = " << code << " name= " << name << " salary= " << salary << endl;
            cout << "HA= " << HA << " DRA= " << DRA << endl;
            cout<<"TA= "<<TA<<" Gross Salary = "<<gross_salary<<endl;
        }

};

int main()
{
    manager m;
    m.set_w();
    m.set_o();
    m.dispaly();
    return 0;
}