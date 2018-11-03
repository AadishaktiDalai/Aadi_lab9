//We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.

#include <iostream>
using namespace std;
int main()
{
char str[20] , *p , *m;

cout<<"Input about 10 characters of string ";
cin>>str;

// Pointer variable refers to address of string

	m = str;

// Show string by shifting top character of string to right


while(*m!='\0'){
	p = m;
	while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
	cout<<endl;
	m++;
	}
	
return 0;
}
