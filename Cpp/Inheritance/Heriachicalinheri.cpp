//W.A.P in C++ using heriachical inherutance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;
class input
{
    public:
            float l,r;
    public:
            void in()
            {
                cout<<"Enter side of square: ";
                cin>>l;
                cout<<"Enter raidus of circle: ";
                cin>>r;
            }
};
class square:public input
{
    float as;
    public:
        void sq()
        {
            as=l*l;
            cout<<"The area of square is: "<<as<<endl;

        }
};
class circle:public input
{
    float ac;
    public:
        void cr()
        {
            ac=3.14*r*r;
            cout<<"The area of circle is: "<<ac;
        }
};
int main()
{
   square s;
   s.in();
   s.sq();
   circle c;
   c.cr();
    return 0;
}