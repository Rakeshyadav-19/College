//W.A.P in C++ using class data type.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;
class info
{
    public: 
            string name;
            char d;
            int rn;
};
int main()
{
    info input;

    cout<<"Enter your name: ";
    cin>>input.name;

    cout<<endl<<"Welcome "<<input.name<<" enter your info below: "<<endl;

    cout<<endl<<"Enter your roll number: ";
    cin>>input.rn;
    cout<<"Enter your division: ";
    cin>>input.d;

    cout<<endl<<"Your Details are:-"<<endl;
    cout<<"Name= "<<input.name<<endl;
    cout<<"Roll Number= "<<input.rn<<endl;
    cout<<"Division= "<<input.d;

    return 0;
}    