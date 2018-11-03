//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

#include<iostream>
using namespace std;

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;

	//printing by normal index method
	
	cout<<"The first element of the array is = "<<arr[0]<<endl;
	cout<<"The second element of the array is = "<<arr[1]<<endl;
	cout<<"The third element of the array is = "<<arr[2]<<endl;
	cout<<"The fourth element of the array is = "<<arr[3]<<endl;
	cout<<"The fifth element of the array is = "<<arr[4]<<endl;
	cout<<"The sixth element of the array is = "<<arr[5]<<endl;
	cout<<"The seventh element of the array is = "<<arr[6]<<endl;
	cout<<"The eighth element of the array is = "<<arr[7]<<endl;
	cout<<"The ninth element of the array is = "<<arr[8]<<endl;
	cout<<"The tenth element of the array is = "<<arr[9]<<endl;

	//printing by pointer method in a loop
	
	p=arr;
	cout<<"The elements of the array are = ";
	for(int i = 0; i<10;i++){
		cout<<*p;
		p++;
		cout<<endl;
	}


return 3;
}
