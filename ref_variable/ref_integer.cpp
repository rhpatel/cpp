#include<iostream>
using namespace std;
main()
{

int x=20;

int &r=x;    // declaring r is the referece to the x

cout<<"x-"<<x<<endl;
cout<<"r-"<<r<<endl;
cout<<"&x-"<<&x<<endl;
cout<<"&r-"<<&r<<endl;   // both x and r got the same user space;
}
