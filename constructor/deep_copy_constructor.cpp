#include<iostream>
#include<cstring>
using namespace std;
class A
{
 char  *str;
public:

  A(const char *p)

      {
     	str=new char [strlen(p)+1];
	strcpy(str,p);
      }
  A (A &obj)                                          // explicit copy constructor
  {
	  cout<<"Explicit copy constructor"<<endl;
	  str=new char [strlen(obj.str)+1];
	  strcpy(str,obj.str);
  }

  void modify()
  {
	  str[0]='s';
  }
  void print()
{
cout<<"str="<<str<<endl;
}
};
int main()
{
A obj1("vector");
A obj2=obj1;
obj1.modify();
obj1.print();
obj2.print();
}




