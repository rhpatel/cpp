#include<iostream>
using namespace std;
class a
{
	int x,y;
	public:
	a()  //automatically invoked during object creation... 
	{
		cout<<"In a constructor"<<endl;
		x=10;
		y=20;
	}
	void print()
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};

main()
{
	a obj1,obj2;
	obj1.print();
	obj2.print();
}

