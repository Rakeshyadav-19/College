//W.A.P in C++  to calculatearea of circle using default constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class circle
{
    public:  
            float r,a;
    public: 
        circle()
        {
            cout<<"Enter radius of circle ";
            cin>>r;

            a=3.14*r*r;

            cout<<"The area is "<<a<<endl;
        }

};
int main()
{
    circle a;
    return 0;
}