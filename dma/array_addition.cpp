#include<iostream>
using namespace std;
class B;
class C;
class A
{
	int a[5];
	public:
	void getdata()
	{
		cout<<"Enter the element of array a"<<endl;
		for(int i=0;i<5;i++)
			cin>>a[i];
	}
	void print()
	{
		for(int i=0;i<5;i++)
			cout<<"a["<<i<<"]="<<a[i]<<" ";
		cout<<endl;
	}

	friend void sum(A &,B &,C &);
};

class B
{
	int b[5];
	public:
	void getdata()
	{
		cout<<"Enter the element of array a"<<endl;
		for(int i=0;i<5;i++)
			cin>>b[i];
	}
	void print()
	{
		for(int i=0;i<5;i++)
			cout<<"b["<<i<<"]="<<b[i]<<" ";
		cout<<endl;
	}
	friend void sum(A &,B &,C &);
};
class C
{
	int c[5];
	public:
	void print()
	{
		for(int i=0;i<5;i++)
			cout<<"c["<<i<<"]="<<c[i]<<" ";
		cout<<endl;
	}
	friend void sum(A &,B &,C &);

};

void sum(A &ob1,B &ob2,C &ob3)
{
	for(int i=0;i<5;i++)
		ob3.c[i]=ob1.a[i]+ob2.b[i];
}

main()
{
	A ob1;
	B ob2;
	C ob3;

	ob1.getdata();
	ob2.getdata();

	ob1.print();
	ob2.print();

	cout<<"Addition"<<endl;

	sum(ob1,ob2,ob3);

	ob3.print();
}







