//W.A.P in C++ to calculate total and percentage of 3 subjects using inside class defination.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class result
{
    public:
        int s1,s2,s3,t;
        float p;
            
            void scorein()
            {
                cout<<"Enter marks in subject 1 ";
                cin>>s1;
                cout<<"Enter marks in subject 2 ";
                cin>>s2;
                cout<<"Enter marks in subject 3 ";
                cin>>s3;
            }

            void scoreout()
            {
                t=s1+s2+s3;
                p=t/3;

                cout<<"The total is "<<t<<endl;
                cout<<"Percentage is "<<p<<"%";
            }

};
int main()
{
    result end;

    end.scorein();
    end.scoreout();

    return 0;
}