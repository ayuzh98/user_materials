#include<iostream>
using namespace std;
void swap(int a[]){ // same array

	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;

	return ;

}
int main(){


	int arr[2] = {98, 100 };

	cout<<arr[0] << "  " <<arr[1]<< endl;

		swap(arr);

	cout<<arr[0] << "  " <<arr[1]<< endl;



	return 0;
}