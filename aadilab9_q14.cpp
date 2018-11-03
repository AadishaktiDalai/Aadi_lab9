// Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.


#include<iostream>
using namespace std;
int main(){
char name[17]={'A','a','d','i','s','h','a','k','t','i',' ','D','a','l','a','i'};


//printing by index method

cout<<"My name is (by index method) ";
for(int i = 0; name[i]!='\0';i++){
	cout<<name[i];}
	cout<<endl;

//printing by pointer method

cout<<"My name is (by pointer method) ";

char *p;
p=name;
for(int i = 0;*p!='\0';i++){
	cout<<*p;
	p++;
	}
	cout<<endl;
return 0;
}
