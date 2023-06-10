// 7. Create a base class called Matrix. Use this class to store 4 int type values that could be
// used to calculate determinants and create matrices. Create class calculate_determinant which
// will calculate the determinant of a matrix.
// Using these classes, calculate the determinant of the matrix.

#include <iostream>
using namespace std;

class Matrix
{
protected:
    int values[4];

public:
    Matrix(int a, int b, int c, int d)
    {
        values[0] = a;
        values[1] = b;
        values[2] = c;
        values[3] = d;
    }
};

class CalculateDeterminant : public Matrix
{
public:
    CalculateDeterminant(int a, int b, int c, int d) : Matrix(a, b, c, d) {}

    int calculateDeterminant()
    {
        return (values[0] * values[3]) - (values[1] * values[2]);
    }
};

int main()
{
    int a, b, c, d;
    cout << "Enter the values of the matrix (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    CalculateDeterminant matrix(a, b, c, d);
    int determinant = matrix.calculateDeterminant();

    cout << "Determinant of the matrix: " << determinant <<endl;

    return 0;
}
