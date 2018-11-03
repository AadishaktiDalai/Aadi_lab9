//Implementing the strstr function 

#include<iostream>
using namespace std;

//the function strlen to get the length of the string 

int astrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}

//the function strstr ro compare the substrings within the main string 

int astrstr(char a[],char b[])
{
	char *p,*q,*r;
	int l=astrlen(b),n=astrlen(a);
	l=n-l+1;
	p=a;
	while(*p!=a[l])
	{
		q=b;
		if(*p==*q)
		{
			r=p;
			while(*q==*r && *q!='\0')
			{r++;q++;}
		    if(*q=='\0')
		    return 1;
		 }
		 p++;
	 }
	 return 0;
}

//the main function

int main()
{
		int k;
		char a[15],b[15];
		cout<<"Enter your main string ";
		cin>>a;
		cout<<"Enter substring ";
		cin>>b;
		k=astrstr(a,b);

		if (k==1)
		cout<<"The given substring is present in the string";
		   
		else 
		cout<<"Given substring is not present in the string";
		
	cout<<endl;			

return 0;
} 
