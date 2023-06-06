// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
// Lowercase and vice versa).

#include<iostream>
using namespace std;

class mystring
{
    char str[100];
    public:
       void accept()
       {
        cout<<"\n Enter string : ";
        cin>>str;
       }
       void display()
       {
        cout<<str<<endl;;
       }

       void operator!()
       {
            for(int i =0; str[i] != '\0';i++)
            {
                if(str[i]>=65 && str[i]<=90)  // capital to small letters
                {
                    str[i] = str[i] + 32;
                }
                else if (str[i] >= 97 && str[i]<=122)  // small to capital letters
                {
                    str[i] = str[i] - 32;
                }
            }
            cout<<"\nreverse case string is : "<<str;
       }
};
int main()
{
    mystring str;
    str.accept();
    str.display();

    !str;
    
    return 0;
}