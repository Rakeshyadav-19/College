//W.A.P in C++ to find average of 4 numbers using inside class defination.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class average
{
    public:
        int a,b,c,d;
        float avg;
            
            void input()
            {
                cout<<"Enter the 1st number: ";
                cin>>a;
                cout<<"Enter the 2nd number: ";
                cin>>b;
                cout<<"Enter the 3rd number: ";
                cin>>c;
                cout<<"Enter the 4th number: ";
                cin>>d;
            }

            void output()
            {
                avg=((a+b+c+d)/4);
                cout<<"The average is "<<avg<<endl;
            }

};
int main()
{
    average f;

    f.input();
    f.output();

    return 0;
}