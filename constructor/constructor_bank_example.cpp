// bank detail initialize uisng constructor......


#include<iostream>
using namespace std;
class bank
{
	private:
		char name[20];
		int id;
		float bal;
	public:
		bank()
		{
			int balance;
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the id"<<endl;
			cin>>id;
abc: cout<<"Enter the balance"<<endl;
     cin>>balance;
     if(balance>=5000)
	     bal=balance;
     else
     { 
	     cout<<"Invalid balance(min 5000)"<<endl;
	     goto abc;
     }
		}
		void print()
		{
			cout<<"Name="<<name<<endl<<"Id="<<id<<endl<<"Bal="<<bal<<endl;
		}
};

main()
{
	bank obj1;
	obj1.print();
}


