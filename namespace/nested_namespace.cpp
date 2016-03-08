#include<iostream>
using namespace std;

namespace first
{

int x=10;
  namespace second             //nested namespace
	{
         int y=20;
	}
}
main()
{

cout<<"first::x"<<first::x<<endl;

cout<<"first::second::y"<<first::second::y<<endl;

}


