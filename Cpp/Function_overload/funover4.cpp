//W.A.P in cpp to show function overoading. 
/*Rakesh Yadav
Roll no. 1029*/
#include <iostream>
using namespace std;

void display(int,double);
void display(double);
void display(int);
int main() 
{

    int a = 5;
    double b = 5.5;

    display(a,b);  
    display(a);
    display(b);

    return 0;
}

void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

void display(int var) {
    cout << "Integer number: " << var << endl;
}

void display(double var) {
    cout << "Double number: " << var << endl;
}