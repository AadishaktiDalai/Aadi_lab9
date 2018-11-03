//Implementing the function strcpy

#include<iostream>
using namespace std;

//the strcpy function

 void astrcpy()
{ char a[20],*p,*m,aa[20];
	cout<<"Enter a String --> ";
	cin>>a;
	m=a;p=aa;
	while(*m!='\0')
	{	*p=*m;
		 p++;
		 m++;
		 if (*m=='\0')
		 *p='\0';
	}

	//printing the copied string

	cout<<"Printing copied string --> "; 
	p=aa;
	while(*p!='\0')
	{cout<<*p;p++;}
}

//the main function

int main()
{ 
	astrcpy();
	cout<<endl;
	return 0;
}
