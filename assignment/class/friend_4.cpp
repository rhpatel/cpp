#include<iostream>
using namespace std;
class b;
class c;
class a
{
	private:
		int a1[5];
	public:
		void read()
		{
			cout<<"Enter the array"<<endl;

			for(int i=0;i<5;i++)
				cin>>a1[i];
		}
		void print()
		{
			for(int i=0;i<5;i++)
				cout<<a1[i]<<"\t";
			cout<<endl;
		}
		friend void sum (a &,b &,c &);
};


class b 
{
	private:
		int b1[5];
	public:
		void read()
		{
			cout<<"Enter the array"<<endl;

			for(int i=0;i<5;i++)
				cin>>b1[i];
		}
		void print()
		{
			for(int i=0;i<5;i++)
			cout<<b1[i]<<"\t";
			cout<<"\t"<<endl;
		}
		friend void sum (a &,b &,c &);
};

class c
{
	private:
		int c1[5];
	public:
		void read()
		{
			cout<<"Enter the array"<<endl;

			for(int i=0;i<5;i++)
				cin>>c1[i];
		}
		void print()
		{
			for(int i=0;i<5;i++)
				cout<<c1[i]<<"\t";
		}		cout<< endl;
		friend void sum (a &,b &,c &);
};


void sum(a &obj1,b &obj2,c &obj3)
{
	for(int i=0;i<5;i++)
		obj3.c1[i]=obj1.a1[i]+obj2.b1[i];
}




main()
{
	a obj1;
	b obj2;
	c obj3;

	obj1.read();
	obj2.read();

	obj1.print();
	obj2.print();

	sum(obj1,obj2,obj3);
	cout<<"Result is"<<endl;
	obj3.print();
}
