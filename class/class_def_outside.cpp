#include<iostream>
using namespace std;

class st
{

	int x,y;

	public:
	void setdata();
	void print();
};
	void st::setdata()
	{
		cout<<"Enter the value of x and y"<<endl;
		cin>>x>>y;
	}
	void st::print()
	{
		cout<<"x-"<<x<<endl<<"y- "<<y<<endl;
	}


main()
{
	st obj;
	obj.setdata();
	obj.print();
}


