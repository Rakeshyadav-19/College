//W.A.P in c++ to perform arithmatic operation using parameterized constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class start
{
    public:
        int x,y;
            start(int i,int j)
            {
               x=i;
               y=j; 

               cout<<"X= "<<x<<"\t"<<"Y= "<<y;
            }
            start(start &ref)
            {
               x=ref.x;
               y=ref.y;  
            }
};
int main()
{
    start obj1(6,3);
    start obj2=obj1;
    return 0;
}