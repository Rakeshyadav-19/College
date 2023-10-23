//W.A.P in C++  to calculate percentage of 3 subjrcts using default constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class student
{
    public: 
            int s1,s2,s3,t; 
            float p;
    public: 
        student()
        {
             cout<<"Enter marks in subject 1 ";
                cin>>s1;
                cout<<"Enter marks in subject 2 ";
                cin>>s2;
                cout<<"Enter marks in subject 3 ";
                cin>>s3;

                t=s1+s2+s3;
                p=t/3;

                cout<<"The total is "<<t<<endl;
                cout<<"Percentage is "<<p<<"%";
        }

};
int main()
{
    student a;
    return 0;
}