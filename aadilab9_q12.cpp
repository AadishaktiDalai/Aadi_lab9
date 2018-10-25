//Program to declare two variables a ,b and a pointer variable p and then perform the steps


#include<iostream>
using namespace std;

int main(){

	//declare two variables a , b and pointer variable p

	int a , b , *p;

	a = 2; b = 3;

	//point p to a

	p = &a;

	//store the value pointed by p in b

	b = *p;

	//print the values of a , b , p

	cout<<" a = "<<a<<endl;
	cout<<" p = "<<p<<endl;
	cout<<" b = "<<b<<endl;

/************************************************************************/
	
	//point p1 to b1

	p = &b;	

	//store the value pointed by p in a

	a = *p;

	//print the values of a1 , b1 , p1

	cout<<" b = "<<b<<endl;
	cout<<" p = "<<p<<endl;
	cout<<" a = "<<a<<endl;
	
	

return 7;
}
