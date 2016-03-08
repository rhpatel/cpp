#include<iostream>
using namespace std;
class a
{

	private:
		int x,y;
	public:
		friend void setdata(a &);
		friend void print(a &);
};

void setdata(a &obj)
{
	cout<<"Entee the x and y"<<endl;
	cin>>obj.x>>obj.y;
}
void print(a &ob)
{
	cout<<"x="<<ob.x<<endl<<"y="<<ob.y<<endl;
}
main()
{
	a obj1,obj2;

	setdata(obj1);
	setdata(obj2);
	print(obj1);
	print(obj2);
}




