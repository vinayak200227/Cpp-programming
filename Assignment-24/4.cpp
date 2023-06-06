// 4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

long long binomialCoeff(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

void printPascalTriangle(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            cout << binomialCoeff(line, i) << " ";
        }
        cout <<endl;
    }
}

int main()
{
    int n;

    cout << "Enter the number of lines for Pascal's triangle: ";
    cin >> n;

    printPascalTriangle(n);

    return 0;
}
