#include<iostream>
using namespace std;

class first;
class second
{
	public:
		void setdata(first &obj);
		void print(first &obj);
};
class first
{	
	int x,y;
	public:
	void setdata()
	{
		cout<<"Enter the value of x and y"<<endl;
		cin>>x>>y;
	}
	friend void second::print(first &obj);
	//	friend void second::setdata(first &obj);   //allow particular class member friend to another class;
};
/*
   void second::setdata(first &obj)    /valid when setdata friend to class first
   {
   cout<<"Enter the value of x and y"<<endl;
   cin>>obj.x>>obj.y;
   }
 */
void second::print(first &obj)
{
	cout<<"x="<<obj.x<<endl<<"y="<<obj.y<<endl;
}

main()
{

	first obj1;
	second obj2;

	obj1.setdata();
	//obj2.setdata(obj1)   // invalid setdata is not friend function for that class
	obj2.print(obj1);
}
