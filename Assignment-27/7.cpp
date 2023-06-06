// 7. Define a C++ class fraction 
// class fraction
// {
//     long numerator;
//     long denominator;
//     Public : fraction(long n = 0, long d = 0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.

#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
    public : 
        fraction(long n = 0, long d = 0)
        {
            numerator = n;
            denominator = d;
        }

        friend void operator>>(istream &in, fraction &f)
        {
            cout << "\n Numerator : ";
            in >> f.numerator;
            cout << "\n Denominator : ";
            in >> f.denominator;
        }

        friend void operator<<(ostream &out, fraction &f)
        {
            out<<f.numerator<<" / "<<f.denominator;
        }
        fraction operator++(void)
        {
            ++numerator;
            ++denominator;
            return (*this);
        }

        fraction operator++(int)
        {
            // fraction old = *this;
            fraction old;
            old.numerator = numerator;
            old.denominator = denominator;

            numerator++;
            denominator++;
            return old;  // after incrementing return previous old value
        }       
};
int main()
{
    fraction f1, f2;
    
    cout<<"Enter 1st fraction value \n";
    cin>>f1;

    cout<<"\n f++ :";
    f1++;
    cout<<f1;

    cout<<"\n ++f1 : ";
    ++f1;
    cout<<f1;

    cout<<"\n Enter 2nd fraction value \n";
    cin>>f2;

    f2 = ++f1;
    cout<<"\n f2 = ++f1"<<endl;
    cout<<" f1 : ";
    cout<<f1;
    cout<<" f2 : ";
    cout<<f2;

    f2 = f1++;
    cout<<"\n f2 = f1++"<<endl;
    cout<<" f1 : ";
    cout<<f1;
    cout<<" f2 : ";
    cout<<f2;
 
    return 0;
}