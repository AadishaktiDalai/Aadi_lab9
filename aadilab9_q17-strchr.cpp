//Implementing the strchr function 

#include<iostream>
using namespace std;

//the function strchr to find the number of the times a character occurs

int astrchr(char a[],char c)
{
	char *p;int n=0;
	p=a;
	while(*p!='\0')
	{
		if(*p==c)
		n++;
		p++;
	}
	return n;
}

//the main function

int main()
{
	char a[15],c;
	int k;
	cout<<"\n Enter your string ";
	cin>>a;
	cout<<"\n Enter the character you want to search ";
	cin>>c;
	k=astrchr(a,c);	
	cout<<"\n no of times '"<<c<<"' repeats in the string = "<<k;
	cout<<endl;

return 0;
}
