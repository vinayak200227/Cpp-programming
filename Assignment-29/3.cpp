// 3. Create a Product class and convert Product type to Item type using constructor
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }

#include<iostream>
using namespace std;

class Product
{
   int x;
   int y;

   public:
        void display()
        {
             cout<<"x = "<<x<<", y = "<<y<<endl;
        }

        Product(int x, int y) : x(x),y(y)
        {

        }

        int getX()
        {
            return x;
        }

        int getY()
        {
            return y;
        }
};

class item
{
    int i;
    public:
         item(Product p)
         {
            i = p.getX() + p.getY();
         }

         void display()
         {
            cout<<"i = "<<i<<endl;
         }
};
int main()
{
    Product p(5,4);
    item i = p;  // product -> item

    p.display();
    i.display();
    
    return 0;
}