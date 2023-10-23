//W.A.P in cpp to show friend function. 
/*Rakesh Yadav
Roll no. 1029*/

#include <iostream>    
using namespace std;

class rectangle    
{    
    private:    
        int length,breadth;    
    public:    
        rectangle() 
        {
            length=3;
            breadth=2;
        } 
        friend int area(rectangle); //friend function    
};    
int area(rectangle b)    
{    
    int rec;
    rec=(b.length*b.breadth);    
    return rec;    
}    
int main()    
{    
    rectangle b;    
    cout<<"Area of box: "<< area(b)<<endl;    
    return 0;    
}    