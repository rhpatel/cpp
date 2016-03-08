#include<iostream>
using namespace std;
class A
{

	int x,y;
	public:

	A(int a,int b):x(a),y(b)
	{
		cout<<"Parameterized constructor"<<endl;
	}

	A(A &obj):x(obj.x),y(obj.y)               // copy constructor....
	{   cout<<"copy constructor"<<endl;
	//	x=obj.x;
	//	y=obj.y;
	}

	void print()
	{
		cout<<"x-"<<x<<endl<<"y-"<<y<<endl;
	}

};
main()
{

	A obj1(15,25);
	A obj2=obj1;
	obj1.print();
	obj2.print();
}
