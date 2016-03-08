// reference variable to the pointer


#include<iostream>
using namespace std;
main()
{

int x=10;

int *p=&x;

int*  (&q)=p;   // declare q is the reference pointer to the pointer p

cout<<"x="<<x<<endl;
cout<<"*p -"<<*p<<endl;
cout<<"*q -"<<*q<<endl;

cout<<"p -"<<p<<endl;
cout<<"q -"<<q<<endl;



}

