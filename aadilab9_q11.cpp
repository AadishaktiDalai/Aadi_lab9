//Program to declare variables of all predefined sizes and declare corresponding pointers . Print out the sizes of each of variables and pointer variables .

#include<iostream>
using namespace std;

int main(){

	//declaring variables and pointers of all data type

	int a , *a1;
	char b , *b1;
	float c , *c1;
	double d , *d1;
	bool e , *e1;

	//assigning value to the variables
	a = 112;
	b = 'a';;
	c = 11.234;
	d = 11.2345; 
	e = 1;

	//assigning value to the pointers
	a1 = &a;
	b1 = &b;
	c1 = &c;
	d1 = &d;
	e1 = &e;

	//printing the size of all the variables and the pointers 
	cout<<"Size of the integer variable is "<<sizeof(a)<<" and size of integer pointer is "<<sizeof(a1)<<endl;
	cout<<"Size of the character variable is "<<sizeof(b)<<" and size of character pointer is "<<sizeof(b1)<<endl;	
	cout<<"Size of the float variable is "<<sizeof(c)<<" and size of float pointer is "<<sizeof(c1)<<endl;
	cout<<"Size of the double variable is "<<sizeof(d)<<" and size of double pointer is "<<sizeof(d1)<<endl;
	cout<<"Size of the boolean variable is "<<sizeof(e)<<" and size of boolean pointer is "<<sizeof(e1)<<endl;
	
return 8;
}












