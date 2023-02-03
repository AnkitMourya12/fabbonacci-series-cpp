#include<iostream>
using namespace std;
int main()
{


int n;
int a=0,b=1,c;

cout<<"enter the number for fabbonacci series:";

cin>>n;
cout<<a<<" "<<b;
for(int i=0;i<n;i++)
{
	int c=a+b;
	a=b;
	b=c;
	cout<<" "<<c;
}
return 0;
}

