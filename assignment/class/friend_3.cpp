#include<iostream>
using namespace std;
class W;
class H
{
	private:
		string name;
		float salary;
	public:
		void read()
		{
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the salary"<<endl;
			cin>>salary;
		}
		void print()
		{
			cout<<"Name   : "<<name<<endl;
			cout<<"salary : "<<salary<<endl;
		}
		friend void sum(H &,W &);
};

class W 
{
	private:
		string name;
		float salary;
	public:
		void read()
		{
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the salary"<<endl;
			cin>>salary;
		}
		void print()
		{
			cout<<"Name   : "<<name<<endl;
			cout<<"salary : "<<salary<<endl;
		}
		friend void sum(H &,W &);
};

void sum(H &ob1,W &ob2)
{
	H temp;
	temp.salary=ob1.salary+ob2.salary;
         
         cout<<"total salary="<<temp.salary<<endl;
	 
} 

main()
{
	H obj1,op;
	W obj2;
	obj1.read();
	obj2.read();
	obj1.print();
	obj2.print();
	sum(obj1,obj2);
	
}




