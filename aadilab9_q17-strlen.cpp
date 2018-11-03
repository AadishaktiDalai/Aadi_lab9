//Implementing the function strlen

#include<iostream>
using namespace std;

//the function strlen

int astrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}

//the main function

int main()
{
	int k;
	char a[15];
	cout<<"Enter your string --> ";
	cin>>a;
	cout<<endl;
	k=astrlen(a);
	cout<<"The string length is --> "<<k<<endl;

return 0;
}
