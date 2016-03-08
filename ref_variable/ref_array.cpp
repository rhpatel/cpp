// reference variable to an array....


#include<iostream>
using namespace std;


main()
{

	int a[5];

	int  (&p)[5]=a;

	for(int i=0;i<5;i++)
		cin>>a[i];

	for(int i=0;i<5;i++)
		cout<<"a["<<i<<"]="<<a[i]<<endl;

	cout<<"print using reference array"<<endl;

	for(int i=0;i<5;i++)
		cout<<"p["<<i<<"]="<<p[i]<<endl;

}





