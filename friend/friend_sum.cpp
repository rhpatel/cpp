#include<iostream>
using namespace std;
class b;
class a
{

	private:
		int x,y;
	public:
void setdata()
{
	cout<<"Entee the x and y"<<endl;
	cin>>x>>y;
}
void print()
{
	cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
friend a sum(a &,b &);
};


class b
{

	private:
		int x,y;
	public:
void setdata()
{
	cout<<"Entee the x and y"<<endl;
	cin>>x>>y;
}
void print()
{
	cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
friend a sum(a &,b &);
};

a sum(a &ob1,b &ob2)
{
a temp;

temp.x=ob1.x+ob2.x;
temp.y=ob1.y+ob2.y;
return temp;
}



main()
{
	a obj1,obj3;
	b obj2;

	obj1.setdata();
	obj2.setdata();
	obj1.print();
	obj2.print();
	obj3=sum(obj1,obj2);
	obj3.print();
}




