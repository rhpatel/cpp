//2d array decleration using dynamic array decleration;
#include<iostream>
using namespace std;
main()
{
	int **p,r,c;

	cout<<"Enter the number of rows and cols"<<endl;
	cin>>r>>c;

	p=new int*[r];
	for(int i=0;i<r;i++)
		p[i]=new int[c];

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>p[i][j];

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<" ";

		cout<<endl;
	}
}



