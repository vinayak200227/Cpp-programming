// 5. Write a C++ program to define a base class Item (item-no, name, price). Derive a class
// Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
// and total amount using appropriate format.

#include<iostream>
using namespace std;

class itemDetails
{
    public:
        int item_no;
        char item_name[50];
        float item_price;
};

class DiscountedItem : public itemDetails
{
    public:
        int discounted_percent;
        int discounted_price;
        void accept_details()
        {
            cout<<"Enter Item name : ";
            cin>>item_name;
            cout<<"Enter Item no. ";
            cin>>item_no;
            cout<<"Enter Item Price : ";
            cin>>item_price;
            cout<<"Enter Discount Percent : ";
            cin>>discounted_percent;
            cout<<"-----------------------------"<<endl;
        }

        void display_details()
        {
            cout<<"Item name : "<<item_name<<endl;
            cout<<"Item No. : "<<item_no<<endl;
            cout<<"Item Price : "<<item_price<<endl;
            cout<<"Discounted Percent : "<<discounted_percent<<endl;
            discounted_price =(item_price*discounted_percent)/100;
            cout<<"Discounted Price : "<<(item_price - discounted_price)<<endl;
            cout<<"--------------------------------"<<endl;

        }

};

int main()
{
    int i, cnt, discount = 0, price = 0;
    cout<<"How many items you want to enter? : ";
    cin>>cnt;

    DiscountedItem d[cnt];

    for(i = 0; i< cnt; i++)
    {
        d[i].accept_details();
    }

    for(i = 0; i< cnt; i++)
    {
        d[i].display_details();
    }

    for(i = 0; i<cnt; i++)
    {
        price += d[i].item_price;
        discount += d[i].discounted_price;
    }

    cout<<"Total Price : "<<price<<endl;
    cout<<"Total Discount : "<<discount<<endl;

    return 0;
}