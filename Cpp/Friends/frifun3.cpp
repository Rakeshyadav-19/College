//Error....
//W.A.P in cpp to show friend function. 
/*Rakesh Yadav
Roll no. 1029*/

#include<iostream>
using namespace std;

class college
{
    private:
        string clg;
    public:
        college()
        {
            cout<<"Enter your college name: ";
            cin>>clg;
        }
    friend void print(college,Department,student);
};

class Department
{
    private:
        string dep;
    public:
        Department()
        {
            cout<<"Enter department name: ";
            cin>>dep;
        }
    friend void print(college,Department,student);
};

class student
{
    private:
        string name;
        int rno,year;
    public:
        student()
        {
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter Roll number: ";
            cin>>rno;
            cout<<"Enter your year: ";
            cin>>year; 
        }
    friend void print(college,Department,student);
};

void print(college C, Department d,student s)
{
    cout<<"College Nmae is:- "<<C.clg;
    cout<<"Department name is:- "<<d.dep;
    cout<<"Name is:- "<<s.name;
    cout<<"Roll number is:- "<<s.rno;
    cout<<"Year is:- "<<s.year;
}


int main()
{
    college C;
    Department d;
    student s;
    print(C,d,s);
    return 0;
}