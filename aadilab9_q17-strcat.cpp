//Implementing the function strcat

#include<iostream>
using namespace std;

//the function strcat

void astrcat()
{
	char a[30],b[15],*m,*p; 

	cout<<"Enter the first string -> ";
	cin>>a;

	cout<<endl;

	cout<<"Enter the second string -> ";
	cin>>b;

	p=b;
	m=a;
		while(*m!='\0')
		m++;
		while(*p!='\0')
		{	 *m=*p;
			 p++;
			 m++;
			 if (*p=='\0')
			 *m='\0';
			 }
		 m=a;

		 cout<<endl;

		 cout<<"Resulting string is -> ";
		 while(*m!='\0')
		 {cout<<*m;
			 m++;}
	 
}

//the main function

int main()
{
	astrcat();
	cout<<endl;


return 0;
}
