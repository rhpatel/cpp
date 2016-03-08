// ambiguity due to default argument

#include<iostream>
using namespace std;

int sum(int i)  // sum with one argument
{
return i;
}

int sum(int i,int j=0) //sum with one fix and one default argument
{
return i+j;
}


main()
{
int op;
op=sum(2,3);  // go for two argumet sum
cout<<"op="<<op<<endl;
//op=sum(2);  // ambiguious  compiler unable to decide that go for default or one argument only...
//cout<<"op="<<op<<endl;

}


 
