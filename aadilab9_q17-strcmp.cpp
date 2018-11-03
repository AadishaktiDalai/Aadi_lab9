//Implementing the strcmp function

#include<iostream>
using namespace std;

//the strclen function to get the length of the string

int astrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}

//the strcmp function to compare the strings

int astrcmp()
{
	char a[30],b[15];
	cout<<"Enter the first string ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the second string ";
	cin>>b;
	if (astrlen(a)==astrlen(b))
	{   char *m,*p;
		m=a;p=b;
		while(*m!='\0')
		{
			if (*m!=*p)
			{return 0;}
			m++;p++;
		}
		return 1;
	}	
	else 
	return 0;			
}

//the main function

int main()
{
	int k;
	k=astrcmp();
	if (k==1){
	cout<<endl;
	cout<<"Both the strings are equal";}
	else {
	cout<<"Stringsare unequal";}
	cout<<endl;
	return 0;
}
