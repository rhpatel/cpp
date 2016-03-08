#include<iostream>
using namespace std;
int input(void)
{
int a;
cout<<"Enter the default value"<<endl;
cin>>a;
return a;
}

int sum(int a=input(),int b=input(),int c=input())
{return a+b+c;}

main()
{
int d;
d=sum(1,2);
cout<<d<<endl;
}


