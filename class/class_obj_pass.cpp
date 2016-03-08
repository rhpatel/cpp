#include<iostream>
using namespace std;

class st
{

	int x,y;
	public:

	void setdata()
	{
		cout<<"Enter the value of x and y"<<endl;
		cin>>x>>y;
	}
	void print()
	{
		cout<<"x-"<<x<<endl<<"y-"<<y<<endl;
	}

      st sum(st &obj)
	{
	st temp;
	temp.x=x+obj.x;
	temp.y=y+obj.y;
	return temp;
	}
      

};

main()
{

	st obj1,obj2,obj3;

	obj1.setdata();
	obj2.setdata();
	obj1.print();
	obj2.print();
	obj3=obj1.sum(obj2);
	obj3.print();
}








