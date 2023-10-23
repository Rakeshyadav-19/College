//W.A.P in c++ using single inheritance.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class student
{
    private:
            int rn;
            string n;
    public:
            void input()
            {
                cout<<"Enter your Roll number:- ";
                cin>>rn;
                cout<<"Enter your name:- ";
                cin>>n;
            }        
};

class marks:public student
{
    private: 
            int p,c,m;
            float t,P;
    public: 
            void output()
            {
                cout<<"Enter your marks in P C M- ";
                cin>>p>>c>>m;
                t=p+c+m;
                P=t/3;
                cout<<"your total is "<<t<<endl;
                cout<<"Your percentage is "<<P<<"%";
            }
};
int main()
{
   marks c;
   c.input();
   c.output();
    return 0;
}