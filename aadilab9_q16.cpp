//Contrary to Exercise 15, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.

#include <iostream>
using namespace std;
int main(){

char a[20], *p , *m , i=0;


cout<<"Input about 10 characters of string ";
cin>>a;

// Pointer variable refers to address of string 

	while(a[i]!='\0')
	i++;
	m=&a[i-1];
	while(*m!=a[0])
	{	
		p=m;
		while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
		cout<<endl;
		m--;
	}
	while(*m!='\0')
	{cout<<" "<<*m;
	m++;}
	cout<<endl;


return 0;
}
