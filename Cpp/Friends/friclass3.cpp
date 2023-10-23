// C++ program to demonstrate the working of friend class
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class input
{
    private:
        char name[50],div;
        int rno;

    public:
        input()
        {
            cout<<"Enter your name: "<<endl;
            cin>>name;
            cout<<"Enter your Division: "<<endl;
            cin>>div;
            cout<<"Enter your Roll number: "<<endl;
            cin>>rno;
        }

    friend class output;
};

class output
{
    public:
        void out(input& obj)
        {
            cout<<endl<<"Name:- "<<obj.name<<endl;
            cout<<"Division:- "<<obj.div<<endl;
            cout<<"Roll number:- "<<obj.rno;

        }
};

int main()
{
    input ob;
    output ob1;
    ob1.out(ob);
    
    return 0;

}