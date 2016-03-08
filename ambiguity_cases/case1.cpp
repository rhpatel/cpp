//ambiguity occurs due to automatic type conversion

#include<iostream>
using namespace std;

void fun(float x)
{
cout<<"Float x"<<endl;
}

void fun(double x)
{
cout<<"double x"<<endl;
}

main()
{
fun(4.5);  // call double
fun(4.5f);  // call float
//fun(4);   // this is ambiguious   compiler unable to decide go for double or float
}



