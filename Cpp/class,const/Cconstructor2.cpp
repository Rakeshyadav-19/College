//W.A.P in c++ to find area of square parameterized constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class square
{
    public:
        float a;
            square(float s)
            {
              a=s*s; 

               cout<<"Area of square is= "<<a;
            }
};
int main()
{
    square s(6);
    
    return 0;
}