#include<iostream>
using namespace std;

class a
{
	int x,y;
	public:

	a(int a,int b=0):x(a),y(b)    //correct initialization   // constructor can have default argument
	{
		x=a,y=b;  // not initialize called assignmnet
	}
	a()                     // default constructor   // constructor overloading
	{
		x=10;
		y=20;
	}
	void print()
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
};

int main()
{

	a obj3,obj1(10),obj2(11,22);

	obj1.print();
	obj2.print();
	obj3.print();
}
