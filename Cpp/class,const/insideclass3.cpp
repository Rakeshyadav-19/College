//W.A.P in C++ to calculate area of triangle using inside class defination.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class triangle
{
    public:
        float b,h,a;
            
            void in()
            {
                cout<<"Enter length of base ";
                cin>>b;
                cout<<"Enter height of triangle ";
                cin>>h;
            }

            void out()
            {
               a=(0.5*b*h);
               cout<<"The area of triangle is "<<a<<endl;         
            }

};
int main()
{
    triangle end;

    end.in();
    end.out();

    return 0;
}