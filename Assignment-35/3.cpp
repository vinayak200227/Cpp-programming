// 3. Write a C++ program to find the largest of three elements using a template.

#include <iostream>
using namespace std;

template <class T>

T Large(T n1, T n2, T n3)
{
    return (n1 > n2) ? (n1 > n3) ? n1 : n3 :(n2 > n3) ? n2 : n3;
}

int main()
{
    int i1, i2 , i3;
    float f1, f2, f3;
    char c1, c2, c3;

    cout << "Enter three integers" << endl;
    cin >> i1 >> i2 >>i3;
    cout << "Enter three floats" << endl;
    cin >> f1 >> f2 >>f3;
    cout << "Enter three characters" << endl;
    cin >> c1 >> c2 >>c3;

    cout << "Largest integer between " << i1 << "," << i2 <<","<<i3 << " is " << Large<int>(i1, i2,i3) << endl;
    cout << "Largest float between " << f1 << "," << f2 <<"," << f3 << " is " << Large<float>(f1, f2,f3) << endl;
    cout << "Largest character between " << c1 << "," << c2 << "," <<c3<< " is " << Large<char>(c1, c2, c3) << endl;

    return 0;
}