//W.A.P in cpp to show function overoading. 
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

void sum(int,int);
void mult(double,double);
void add(char,char);

int main()
{
    int a=10,b=20;
    double c=2.3,d=3.2;
    char e='a',f='d';

    sum(a,b);
    mult(c,d);
    add(e,f);

    return 0;
}

void sum(int x,int y)
{
    cout<<"The sum of numbers are= "<<x+y<<endl;
}

void mult(double x,double y)
{
   cout<<"Multipliction is= "<<x*y<<endl; 
}

void add(char x,char y)
{
    cout<<"Addition f characters is= "<<x+y;
}