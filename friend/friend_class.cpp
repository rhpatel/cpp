#include<iostream>
using namespace std;
class second;
class first
{
	int x,y;
	friend class second;
};
class second
{
	public:
		void setdata(first &obj)
		{
			cout<<"Enter the data of x and y"<<endl;
			cin>>obj.x>>obj.y;
		}
		void print(first &obj)
		{
			cout<<"x="<<obj.x<<endl<<"y="<<obj.y<<endl;
		}
};

main()
{

	first obj1;
	second obj2;

	obj2.setdata(obj1);
	obj2.print(obj1);
}





