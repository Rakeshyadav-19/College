//W.A.P in c++ deconstruct constructor.
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class des
{
    public:
            des()
            {
                cout<<"This is Connstructor"<<endl;
            }

            ~des()
            {
                cout<<"This is Destructor";
            }
};
int main()
{
    des d;
    return 0;
}