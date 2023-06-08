// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);

// i1=p1;
// return 0;
// }


// ''' here we want to convert product to item so need to make operator in product class so create item class before product  '''

#include <iostream>
    using namespace std;

class item
{
    int i;

public:
    item()
    {

    }
    item(int x)
    {
        i = x;
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

class Product
{
    int x;
    int y;

public:
    void display()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

    Product(int x, int y) : x(x), y(y)
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

    operator item()
    {
        item i(x + y);
        return i;
        // return x + y;  // will also work as we have constructor for item
    }
};


int main()
{
    Product p(5, 4);
    item i = p; // product -> item

    p.display();
    i.display();

    return 0;
}