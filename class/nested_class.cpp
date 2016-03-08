#include<iostream>
using namespace std;

class a
{

	public:
		int x;
		class b
		{
			public:
				int y;
		}obj3;

};

main()
{

	a obj1;
	a::b obj2;   // use scope only when creating object

	obj1.x=10;
	obj2.y=20;
	obj1.obj3.y=30;   // cant access internal object direct without external object

	cout<<"obj1.x= "<<obj1.x<<endl;
	cout<<"obj2.y= "<<obj2.y<<endl;
	cout<<"obj1.obj3.y= "<<obj1.obj3.y<<endl;
}






	
