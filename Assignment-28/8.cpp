// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such
// that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
// objects of 3D coordinate class.

#include<iostream>
using namespace std;

class coords3D
{
    private:
        double x, y, z;

    public:
        coords3D()
        {
            x = y = z = 0;
        }

        coords3D(double x, double y, double z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void display()
        {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }

        coords3D operator,(coords3D obj)
        {
            coords3D temp;

            temp.x = obj.x;
            temp.y = obj.y;
            temp.z = obj.z;

            return temp;
        }
};

int main()
{
    coords3D c1(1,3,5);
    coords3D c2(2,4,6);
    coords3D c3;

    c3 = (c1, c2);  //  c3 = c1.operator,(c2);
    c3.display();
    
    return 0;
}