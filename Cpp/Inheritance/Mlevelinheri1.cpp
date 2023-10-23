 //W.A.P in c++ using multilevel inheritance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class student
{
    protected:
            int rn;
            string n;
    public:
            void stu()
            {
                cout<<"Enter your Roll number:- ";
                cin>>rn;
                cout<<"Enter your name:- ";
                cin>>n;
            }        
};

class marks:public student
{
    protected:
            int p,c,m;
            float t,P;
    public: 
            void mar()
            {
                cout<<n<<",enter your marks in P C M- ";
                cin>>p>>c>>m;
               
            }
};

class total:public marks
{
    public: 
            void tot()
            {
                t=p+c+m;
                P=t/3;
                cout<<"your total is "<<t<<endl;
                cout<<"Your percentage is "<<P<<"%";
            }
}; 
int main()
{
   total c;
   c.stu();
   c.mar();
   c.tot();
    return 0;
}