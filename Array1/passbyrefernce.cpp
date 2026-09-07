#include<iostream>
using namespace std;
void passing(int a[]){
	a[0] = 124;
	
	return ;
}
int main(){

	int arr[] = {1 , 2 , 3 ,4};
	cout<<arr[0] << endl;

	passing(arr); //pass by refernce

cout<<arr[0]<<endl;
	return 0;
}