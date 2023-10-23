//W.A.P in cpp to show friend function. 
/*Rakesh Yadav
Roll no. 1029*/

#include <iostream>
using namespace std;

class base {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}
	friend void friendFunction(base& obj);
};


void friendFunction(base& obj)
{
	cout <<"Private Variable: "<<obj.private_variable<<endl;
	cout <<"Protected Variable: "<<obj.protected_variable;
}

int main()
{
	base object1;
	friendFunction(object1);

	return 0;
}
