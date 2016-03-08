//increase code readability using bool data type.....


#include<iostream>
using namespace std;

bool response()
{
	char ch;
	cout<<"do you want to continue(Y/y)"<<endl;
	cin>>ch;

	if(ch=='Y'||ch=='y')
		return true;
	else
		return false;
}

main()
{

	bool x;

	x=response();
	cout<<"x="<<x<<endl;


	if (x==true)
		cout<<"Process continue"<<endl;
	else
		cout<<"process failure"<<endl;
}
