// default argument.....

// when default argumnt need it will ask to user through input function.....

#include<iostream>
using namespace std;

int input()
{
int n;
cout<<"Enter the default value"<<endl;
cin>>n;
return n;
}

int sum(int =input(),int =input(),int =input());    //default arg must be proide in declaration not in definition
main()
{

	int op;


	op=sum();                  // all default
	cout<<"op=  "<<op<<endl;

	op=sum(1);                 // two argument as default
	cout<<"op=  "<<op<<endl;

	op=sum(2,3);                            // one argument is default
	cout<<"op=  "<<op<<endl;

	op=sum(4,5,6);                    // no default argment///
	cout<<"op=  "<<op<<endl;
}

int sum(int a,int b,int c)
{
	return a+b+c;
}

