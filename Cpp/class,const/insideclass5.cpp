//W.A.P in C++ to perform arithmatic operations on two numbers.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;
 
class op
{
    public:
            int num1,num2;
    public:
            void in()
            {
                cout<<"Enter two numbers ";
                cin>>num1>>num2;
            }
            void out()
            {
                cout<<"The addition is:"<<num1+num2<<endl;
                cout<<"The substraction is:"<<num1-num2<<endl;
                cout<<"The multiplication is:"<<num1*num2<<endl;
                cout<<"The division is:"<<num1/num2<<endl;
                cout<<"The mod is:"<<num1%num2;
            }

};
int main()
{
    op ans;
    ans.in();
    ans.out();
    return 0;
}