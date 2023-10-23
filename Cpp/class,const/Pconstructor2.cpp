//W.A.P in c++ to calculate area of circle using parameterized constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class circle
{
    public:
        float a;
            circle(float r)
            {
                a=r*3.14*r;
                cout<<"The area of circle is= "<<a<<endl;
            }
};
int main()
{
    circle s(3);
    return 0;
}