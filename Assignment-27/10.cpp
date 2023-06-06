// 10. Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).

#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    void accept();
    void display();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    cout << "\nEnter 3X3 matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Matrix::display()
{
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
void Matrix::operator+(Matrix x)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = a[i][j] + x.a[i][j];
        }
    }
}

int main()
{
    Matrix m1,m2,m3;
    m1.accept();
    m1.display();

    m2.accept();
    m2.display();
    
    cout<<endl;
    cout<<"Addition of matrices is"<<endl;
    m1 + m2;
    m1.display();
    return 0;
}