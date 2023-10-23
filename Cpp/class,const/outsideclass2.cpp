//W.A.P in C++ to find ratio and reciprocol of number using outside class defination. 
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class num
{
    public:
            float num1,num2,ratio;
    public:
            void all();        
};                                                                                   

void num::all()
{
    cout<<"Enter two numbers-> ";
    cin>>num1>>num2;

    ratio=num1/num2;
    cout<<"Ratio is "<<ratio<<endl;
    cout<<"Reciprocal is "<<num2<<"/"<<num1;
}
int main()
{
    num n;

    n.all();

    return 0;
}