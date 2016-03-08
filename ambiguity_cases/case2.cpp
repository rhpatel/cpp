// ambiguity due o reference variable


#include<iostream>
using namespace std;

void fun(int x)
{
cout<<"x="<<x<<endl;
}
void fun(int &x)
{
cout<<"&x="<<x<<endl;
}


main()
{
int x=10;
fun(10);  // compiler fo for normal fun because ref var no applicable for constant value 
//fun(x)   //  this is ambiguious because compiler unable to decide weather go for normal functuon or a reference variable;
}


