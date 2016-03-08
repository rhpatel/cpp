#include<iostream>
using namespace std;

class a
{
	int x,y;
	public:

	a(int a,int b=0):x(a),y(b)    //correct initialization   // constructor can have default argument
	{
		//x=a,y=b;  // not initialize called assignmnet
	}
	a():x(10),y(20)                     // default constructor  
	{
	cout<<"default constructor"<<endl;
	}
	void print()
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
    ~a()
	{
	cout<<"destructor"<<endl;
	}



};

int main()
{

	a obj3,obj1(10),obj2(11,22);

	obj1.print();
	obj2.print();
	obj3.print();
}
