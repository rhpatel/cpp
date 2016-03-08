#include<iostream>
using namespace std;

int sum1(int a,int b)         //1
{
	return a+b;
}

float sum1(double a, double b)  //2
{
	return a+b;
}

float sum1(int a,double b)    //3
{
	return a+b;
}

float sum1(double a, int b)  //4
{
	return a+b;
}

main()
{
	int op;


	op=sum1(1,2);  //call 1
		cout<<"output="<<op<<endl;

	op=sum1(1.5,2.5);// call 2
		cout<<"output="<<op<<endl;

	op=sum1(1,2.5);  // call 3
		cout<<"output="<<op<<endl;

	op=sum1(1.5,2);    // call 4
		cout<<"output="<<op<<endl;


}
