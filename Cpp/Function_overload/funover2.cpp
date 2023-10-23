//W.A.P in cpp to show function overoading. 
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

void area(float,float);
void area(int,int);
void area(double);

int main()
{
    int g,c,d;
    float a,b;
    double r;

    cout<<"Select the object below: "<<endl;
    cout<<"1.Triangle"<<endl<<"2.Rectangle"<<endl<<"3.Circle"<<endl;
    cout<<"Enter thenumber below: ";
    cin>>g;
    
    if(g==1)
    {
        cout<<"Enter height of triangle= ";
        cin>>a;
        cout<<"Enter the base of triangle= ";
        cin>>b;
        area(a,b);
    }

    if(g==2)
    {
        cout<<"Enter length of rectangle= ";
        cin>>c;
        cout<<"Enter breadth of rectangle= ";
        cin>>d;
        area(c,d);
    }

    else
    {
        cout<<"Enter radius of circle= ";
        cin>>r;
        area(r);
    }

    return 0;
}

void area(float x,float y)
{
    float t;
    t=0.5*x*y;
    cout<<"Area of triangle is: "<<t;
}
void area(int x,int y)
{
    int R;
    R=x*y;
    cout<<"Area of rectangle is:"<<R;
}
void area(double x)
{
    double c;
    c=3.14*x*x;
    cout<<"Area of circle: "<<c;
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