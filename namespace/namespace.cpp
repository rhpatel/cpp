#include<iostream>
using namespace std;             // directive method (acces for all member)

namespace first                      //name space must be defined outside the main
{
	int x=20;
	void fun()
	{
		cout<<"function first"<<endl;
	}
}

namespace second
{
	int x=30;
	void fun()
	{
		cout<<"function second"<<endl;
	}
}

int x=10;
void fun()
{
	cout<<"global function"<<endl;
}

main()
{

	cout<<"x= "<<x<<endl;
	fun();

	cout<<"first::x"<<first::x<<endl;     // Qualifying   (for particular member)
	first::fun();                             


	using second::fun;      //declerative  (access enable for particular below this decleration  for particular member)
	using first::x;
	fun();             
	cout<<x<<endl;     //print from namespace first because declerative namespace
}
