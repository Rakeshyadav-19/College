//W.A.P in C++ to define and use class data type.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class welcome
{
    public: 
           int rn;
           string n;
};

int main()
{
    welcome data ;

        data.rn=1029;
        data.n="Rakesh";

        cout<<"Roll no is "<<data.rn<<endl;
        cout<<"Name is "<<data.n;
        return 0;
    
}      