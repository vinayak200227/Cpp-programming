// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.

#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
        void accept();
        void display();
        void operator-();
};
void Matrix::accept()
{
    cout<<"\n Enter 3X3 matrix : "<<endl;
    for(int i =0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

}
void Matrix::display()
{
    cout<<endl;
    for(int i =0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

}
void Matrix::operator-()
{
    for(int i =0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            a[i][j] = - a[i][j];
        }
    }

}

int main()
{
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
    return 0;
}