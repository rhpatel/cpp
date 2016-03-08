#include<iostream>
using namespace std;
class b;
class c;
class a
{
	private:
		int x;
	public:
		friend void read(a &,b &,c &);
		friend void print(a &,b &,c &);
};
class b 
{
	private:
		int y;
	public:
		friend void read(a &,b &,c &);
		friend void print(a &,b &,c &);
};

class c 
{
	private:
		int z;
	public:
		friend void read(a &,b &,c &);
		friend void print(a &,b &,c &);
};


void read(a &ob1,b &ob2,c &ob3)
{
	cout<< "Enter data of x"<< endl;
	cin>> ob1.x;

	cout<< "Enter data of y"<< endl;
	cin>> ob2.y;

	cout<< "Enter data of z"<< endl;
	cin>> ob3.z;
}
void print(a &ob1,b &ob2,c &ob3)
{
	cout<< "Data of x= "<<ob1.x << endl;

	cout<< "Data of y= "<<ob2.y<< endl;

	cout<< "Data of z= "<<ob3.z<< endl;
}

main()
{
	a ob1;
	b ob2;
	c ob3;
	read(ob1,ob2,ob3);
	print(ob1,ob2,ob3);

}


