#include<iostream>
using namespace std;
class a
{
	int x,y;
	public:
	//	void setdata(int a,int b)
	void setdata(int x,int y)// actual and formal parameter same

	{                        // all are valid options....
		this->x=x;
		this->y=y;
		// a::x=x;
		//a::y=y;
		//this->x=a;
		//this->y=b;
		//(*this).x=a;
		//(*this).y=b;
	}
	void print()
	{
		cout<<"x="<<this->x<<endl;  // (*this).x  valid
		cout<<"y="<<this->y<<endl;  //(*this).y   valid
	}
};
main()
{

	a obj1,obj2;

	obj1.setdata(10,20);
	obj2.setdata(11,22);
	obj1.print();
	obj2.print();
}





