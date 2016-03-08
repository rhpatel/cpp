// dynamic memory allocation for 1d array;
#include<iostream>
using namespace std;
main()
{
	int *p;

	p=new int[5];

	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"p["<<i<<"]="<<p[i]<<endl;
	}

	delete[] p;

}


