#include<iostream>
using namespace std;
struct st
{
	int x;
	mutable int y;   //mutable is the keyword used to modification of data of constant object 
};


main()
{

	const st a={10,20};
	cout<<"x="<<a.x<<endl<<"y="<<a.y<<endl;

	//a.x=30;  //  invalid constat object
	a.y=30;   //   valid  because y is mutable  even though object is mutable;
	cout<<"x="<<a.x<<endl<<"y="<<a.y<<endl;
}




