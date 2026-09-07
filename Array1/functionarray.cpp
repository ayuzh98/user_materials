#include<iostream>
using namespace std;

void function(int a[]){

	a[0] = 100;
	 return ;
}

int main(){

	int arr[5] = {1 , 4 , 3 , 5 ,6};

	cout<<arr[0] << endl;

	function(arr);

	cout<<arr[0];

	return 0;
}