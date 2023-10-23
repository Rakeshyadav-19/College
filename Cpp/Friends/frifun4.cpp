//W.A.P in cpp to show friend function. 
/*Rakesh Yadav
Roll no. 1029*/

#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    
        
    private:
        int numA;
    
    public:
        ClassA()
        {
           numA=90; 
        }
    friend int add(ClassA, ClassB);
};

class ClassB {

    private:
        int numB;
 
        friend int add(ClassA, ClassB);
    public:
    
        ClassB()
        {
            numB=10;    
        }
};

int add(ClassA objectA, ClassB objectB)
{
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}