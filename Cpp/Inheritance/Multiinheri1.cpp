//W.A.P in c++ using multiple inheritance.
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
            void stu()
            {
                cout<<"Enter your Roll number:- ";
                cin>>rn;
                cout<<"Enter your name:- ";
                cin>>n;
            }        
};

class sport
{
    private:
            float h,w;
            string name;
    public:
            void spo()
            {
                cout<<"Enter your Height and Weight: ";
                cin>>h>>w;
                cout<<"Enter your sport name ";
                cin>>name;
            }
};

class result:public student,public sport
{
     private: 
            int p,c,m;
            float t,P;
    public: 
            void res()
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
  result c;
   c.stu();
   c.spo();
   c.res();
    return 0;
}