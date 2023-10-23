//W.A.P in cpp to show friend class. 
/*Rakesh Yadav
Roll no. 1029*/

#include <iostream>
using namespace std;

class master {
private:
	int pri;

protected:
	int pro;

public:
	master()
	{
		pri = 10;
		pro = 99;
	}


	friend class branch;
};

class branch {
public:
	void display(master& m)
	{
		cout << "The value of Private Variable = "<< m.pri << endl;
		cout << "The value of Protected Variable = "<< m.pro;
	}
};

int main()
{
	master b;
	branch fri;
	fri.display(b);
	return 0;
}