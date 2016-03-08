#include<iostream>
using namespace std;

class a
{
	int *p ;
	public:

	
	a()                     // default constructor  
	{
	cout<<"default constructor"<<endl;
	
	p=new int[5];   // array only assigned cant initialize
	cout<<"p-"<< (unsigned *)p<<endl;
	for(int i=0;i<5;i++)
	p[i]=i+10;
	for(int i=0;i<5;i++)
	cout<<p[i]<<" ";
	cout<<endl;
	}  
  ~a()
	{
	cout<<"destructor"<<endl;
	delete p;
	}



};

int main()
{
	{
	a obj1;
	}
	a obj2;
}
