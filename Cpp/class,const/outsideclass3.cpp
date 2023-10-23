//W.A.P in C++ to calculate area of triangle using outside class defination. 
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class triangle
{
    public:
            float b,h,a;
    public:
            void length();        
};                                                                                   

void triangle::length()
{
    cout<<"Enter Base and Height of triangle-> ";
    cin>>b>>h;

    a=(0.5*b*h);
    cout<<"The area of triangle is "<<a<<endl;
    
}
int main()
{
    triangle t;

    t.length();

    return 0;
}