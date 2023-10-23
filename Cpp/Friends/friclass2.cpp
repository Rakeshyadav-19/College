// C++ program to demonstrate the working of friend class
/*Rakesh Yadav
Roll no. 1029*/

#include <iostream>
using namespace std;

class ClassA {
    private:
        int numA;
       
    public:
        ClassA()
        {
            numA=3;
        }
        friend class ClassB;
};

class ClassB {
    private:
        int numB;

    public:
        ClassB()
        {
            numB=2;
        }
    
    int add() {
        ClassA objectA;
        return (objectA.numA + numB);
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: "<< objectB.add();
    return 0;
}