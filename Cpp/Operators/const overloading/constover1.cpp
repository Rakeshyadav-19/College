/*Rakesh Yadav
Roll no. 1029*/
//Constructor overloading
#include<iostream>
using namespace std;

class Person
{
private:

int age;

public:

Person() 
{ 
  age=20;
}

Person(int a)
{
age = a;
}

int getAge() 
{
return age;
}
};
int main() {

Person person1, person2(45);

cout << "Person1 Age = " << person1.getAge() << endl; 

cout << "Person2 Age = " << person2.getAge() << endl;

return 0;
  
}