#include<iostream>
using namespace std;
void swaping(int a[]){
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	return;
}
int main(){

int a[] = {12 , 29};

cout<<a[0]<<" "<<a[1] <<endl;;

swaping(a);
cout<<a[0]<<" "<<a[1];


	return 0;
}