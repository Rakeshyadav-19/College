//ProgramtoexplainFunctionOverloading
/*Rakesh yadav
Roll no. 1029*/
#include <iostream>
using namespace std;
int Simp_Int(float,float,float); 
int Simp_Int(float,float); 
int Simp_Int(float); 
int Simp_Int();

int main()
{
float p,r,t,si;

si=Simp_Int(2000,15,2); 
cout<<"\nSimpleInterest="<<si;
si=Simp_Int(2000,15); 
cout<<"\nSimpleInterest="<<si;
si=Simp_Int(2000); 
cout<<"\nSimpleInterest="<<si;
si=Simp_Int();
cout<<"\nSimpleInterest="<<si;
}

int Simp_Int(float p,float r,float  t)
{
float si;
si=(p*r*t)/100;
return si;
}

int Simp_Int(float p,float r)
{
float si;
si=(p*r*3)/100;
return si;
}

int Simp_Int(float p)
{
float si;
si=(p*10*3)/100;
return si;
}

int Simp_Int()
{
float si;
si=(1000*10*3)/100;
return si;
}
