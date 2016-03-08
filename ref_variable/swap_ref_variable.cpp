// swapping two variable using reference variable



#include<iostream>
using namespace std;

void swap(int &a,int &b)   // catching argument through reference variable
{
int temp;
temp=a;
a=b;
b=temp;
}

main()
{

int x,y;
cout<<"Enter the value of x and y"<<endl;
cin>>x>>y;

cout<<"Before swap"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
swap(x,y);
cout<<"after  swap"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;

}

