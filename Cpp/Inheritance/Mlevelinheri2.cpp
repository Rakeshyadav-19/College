 //W.A.P in c++ using multilevel inheritance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class product
{
    protected:
            string n;
    public:
            void pro()
            {
                cout<<"Enter product name:- ";
                cin>>n;
                
            }        
};

class quantity:public product
{
    protected:
            int q,p;
    public: 
            void qua()
            {
                cout<<"Enter "<<n<<" price:- ";
                cin>>p;
                cout<<"enter quantity of "<<n<<" ";
                cin>>q;
               
            }
};

class total:public quantity
{
    public:
            float t;
    public: 
            void tot()
            {
                t=(p*q);
                cout<<"your total is "<<t<<"Rs."<<endl;
            }
}; 
int main()
{
   total c;
   c.pro();
   c.qua();
   c.tot();
    return 0;
}