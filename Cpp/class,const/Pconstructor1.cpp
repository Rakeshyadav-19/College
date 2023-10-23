//W.A.P in c++ to perform arithmatic operation using parameterized constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class arith
{
    public:
            arith(float num1,float num2)
            {
                cout<<"The addition is:"<<num1+num2<<endl;
                cout<<"The substraction is:"<<num1-num2<<endl;
                cout<<"The multiplication is:"<<num1*num2<<endl;
                cout<<"The division is:"<<num1/num2<<endl;
            }
};
int main()
{
    arith s(6,3);
    return 0;
}