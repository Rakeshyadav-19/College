//W.A.P in c++ using multiple inheritance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class circle
{
    public:
            float r;
    public:
            void cir()
            {
                cout<<"Enter Raidus of circle:- ";
                cin>>r;
            }        
};

class square
{
    public:
            float s;
    public:
            void squ()
            {
                cout<<"Enter side of square: ";
                cin>>s;
            }
};

class area:public circle,public square
{
     public: 
            float as,ac;
    public: 
            void are()
            {
                ac=3.14*r*r;
                as=s*s;
                cout<<"Area of circle is "<<ac<<endl;
                cout<<"Area of square is "<<as;
            }
}; 
int main()
{
   area a;
   a.cir();
   a.squ();
   a.are();
    return 0;
}