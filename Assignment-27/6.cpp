// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include<iostream>
#include<string.h>
using namespace std;

class cstring
{
    public:
        char str[20];

        void get_string()
        {
            cout<<"\n Enter string: "<<endl;
            cin>>str;
        }

        void display()
        {
            cout<<str<<endl;
        }

        cstring operator+(cstring x)  // concatenating string
        {
            cstring s;
            strcpy(s.str, str);
            strcat(s.str, x.str);

            return s;
        }

        int operator==(cstring t) // comparing string
        {
            int equalOrNot = 1;
            for(int i =0; str[i]!='\0';i++)
            {
                if(str[i] != t.str[i])
                {
                    equalOrNot = 0;
                    break;
                }
            }
            return equalOrNot;
        }
};

int main()
{
    cstring str1, str2, str3;
    str1.get_string();
    str1.display();
    str2.get_string();
    str2.display();

    str1 = str1 + str2;
    str1.display();

    int result = str1 == str2;
    if (result == 1)
        cout << "Both the strings are equal" << endl;
    else
        cout<<"Strings are unequal"<<endl;
        
    return 0;
}