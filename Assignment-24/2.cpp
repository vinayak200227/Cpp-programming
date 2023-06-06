// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

class digit
{
    public:
        int n;

    void findMaxDigit()
    {
        int m = n;
        int max = -1;

        while(n != 0)
        {
            int rem = n % 10;
            if(rem > max)
                max = rem;
            n = n / 10;
        }
        cout<<"Highest value digit from "<<m<<" is "<<max<<endl;
    }
};
int main()
{
    digit d;
    cout<<"Enter a number"<<endl;
    cin>>d.n;
    d.findMaxDigit();

    return 0;
}