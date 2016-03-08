#include<iostream>
using namespace std;
class b;
class a
{
	private:
		int x;
		friend void read(a &,b &);
		friend void swap(a &,b &);
		friend void print(a &,b &);
}; 
class b 
{
	private:
		int y;
		friend void read(a &,b &);
		friend void swap(a &,b &);
		friend void print(a &,b &);
}; 

void swap(a &ob1,b& ob2)
{
	int temp;
	temp=ob1.x;
	ob1.x=ob2.y;
	ob2.y=temp;
}

void print(a &ob1,b &ob2)
{
	cout<<"X="<<ob1.x<<endl;
	cout<<"y="<<ob2.y<<endl;
}

void read(a &ob1,b &ob2)
{
	cout<<"Enter the value of x"<<endl;
	cin>>ob1.x;

	cout<<"Enter the value of y"<<endl;
	cin>>ob2.y;
}


main()
{
	a obj1;
	b obj2;
	read(obj1,obj2);
	print(obj1,obj2);
	swap(obj1,obj2);
	cout<<"After swap"<<endl;

	print(obj1,obj2);
}
