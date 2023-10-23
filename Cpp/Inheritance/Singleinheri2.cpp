//W.A.P in c++ using single inheritance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class product
{
    private:
            int c;
            string n;
    public:
            void input()
            {
                cout<<"Enter product name:- ";
                cin>>n;
                cout<<"Enter product code:- ";
                cin>>c;
            }        
};

class bill:public product
{
    private: 
            float q,p,t;
    public: 
            void output()
            {
                cout<<"Enter price of product ";
                cin>>p;
                cout<<"your quantity of product ";
                cin>>q;
                t=q*p;
                cout<<"Your total is "<<t<<"Rs.";
            }
};
int main()
{
   bill c;
   c.input();
   c.output();
    return 0;
}