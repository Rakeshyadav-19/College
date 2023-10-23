//W.A.P in C++ to convert temperatures using outside class defination.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;
class temp
{
    public:
            float k,k1,c,c1;
    public: 
            void C();
            void K();
};
void temp::C()
{
    cout<<"Enter the temperature ";
    cin>>k;
    k1=k+273.15;
    cout<<"The teperature in kelvin is: "<<k1;
}
void temp::K()
{
    cout<<"Enter the temperature ";
    cin>>c;
    c1=273.15-c;
    cout<<"The teperature in celsius is: "<<c1;
}

int main()
{
    int i;
    temp j;
    cout<<"Select your temperature is in:"<<endl;
    cout<<"1.celsius"<<endl<<"2.Kelvin"<<endl;
    cin>>i;
        if(i==1)
        {
          j.C();
        }
        else
        {
            j.K();
        }
    return 0;
}