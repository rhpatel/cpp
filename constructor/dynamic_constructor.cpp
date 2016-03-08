#include<iostream>
using namespace std;
class a
{
	int x,y;
	public:
	a():x(10),y(20)
			  //automatically invoked during object creation... 
	{
		cout<<"In a  default constructor"<<endl;
		//x=10;
		//y=20;
	}
	a(int p,int q):x(p),y(q)
	{
	cout<<"parameterized constructor"<<endl;
	}
	void print()
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};

main()
{
	a *obj1=new a;
	a *obj2=new a(11,22);
	obj1->print();
	obj2->print();
}

