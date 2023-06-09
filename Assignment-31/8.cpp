// 8 - In a bank, different customers have savings account. Some customers may have taken a
// loan from the bank. So bank always maintain information about bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers.

#include<iostream>
using namespace std;

class Customer
{
    protected:
        char name[10];
        long long phone_number;

};

class Depositor : public Customer
{
    protected:
        int accno, balance;

    public:
        void setData()
        {
            cout<<"Enter Customer Name      : ";
            cin>>name;
            cout<<"Enter Customer Phone no. : ";
            cin>>phone_number;
            cout<<"Enter Customer A/C no.   : ";
            cin>>accno;
            cout<<"Enter Balance            : ";
            cin>>balance;
        }

        void getData()
        {
            cout<<"Details of Customer"<<endl<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"Customer Name     :"<<name<<endl;
            cout<<"Customer Phoe No. :"<<phone_number<<endl;
            cout<<"Customer A/C No.  :"<<accno<<endl;
            cout<<"Balance           :"<<balance<<endl;
        }

};

class Borrower : public Depositor
{
    int loan_no, loan_amount;
    public:
        void setData()
        {
            cout << "Enter Loan No.    : ";
            cin >> loan_no;
            cout << "Enter  Loan Amount : ";
            cin >> loan_amount;

            cout<<"-------------------------------"<<endl;
        }

        void getData()
        {
            cout<<"----------------------------------"<<endl;
            cout<<"Loan No           :"<<loan_no<<endl;
            cout<<"Loan Amount       :"<<loan_amount<<endl;
            cout<<"-----------------------------------"<<endl;
        }

};

int main()
{
    int cnt;
    cout<<"How many customers : ";
    cin>>cnt;

    Depositor d[cnt];
    Borrower b[cnt];

    for(int i = 0; i<cnt; i++)
    {
        d[i].setData();
        b[i].setData();
    }

    for (int i = 0; i < cnt; i++)
    {
        d[i].getData();
        b[i].getData();
    }
    return 0;
}