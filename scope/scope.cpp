//access global variable using scope resolution


#include<iostream>
using namespace std;
int x=10;
main()
{
int x=20;

cout<<"local x-"<<x<<endl;
cout<<"global x-"<<::x<<endl;
}


