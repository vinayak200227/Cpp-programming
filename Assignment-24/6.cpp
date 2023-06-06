// 6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

//// int *p = &x;  //pointer variable
//// int &q = x;  // Reference variable


// void swap(int *p, int *q)
// {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }

void swap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}


int main()
{
    int x = 5, y = 10;
    // swap(&x, &y);

    swap(x,y); // call by reference

    cout<<"After swapping x = "<<x<<" and y = "<<y<<endl;

    return 0;
}
