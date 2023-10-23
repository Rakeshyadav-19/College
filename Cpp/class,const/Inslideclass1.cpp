//W.A.P in C++ to calculate area of circle with class inside.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;
 
class circle
{
    public:
            void area()
            {
                int r;
                float a;

                cout<<"Enter Raidus ";
                cin>>r;

                a=r*r*3.14;
                cout<<"The are os circle is= "<<a;
            }

};
int main()
{
    circle ans;
    ans.area();
    return 0;
}