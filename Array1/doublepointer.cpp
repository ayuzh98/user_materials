#include<iostream>
using namespace std;
int main(){

	int x = 5;
	int* ptr = &x;
	int** p = &ptr; //double pointer
	int*** q = &p; //triple pointer
	cout<<x<<endl;//value of x
	cout<<&x<<endl;//address of x
	cout<<*ptr<<endl;//value of x
	cout<<ptr<<endl;//address of x
	cout<<p<<endl;//address of ptr
	cout<<**p<<endl;//value of x
	cout<<*p<<endl; // adress of x
	
	return 0;
}