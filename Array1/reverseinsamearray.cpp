#include<iostream>
using namespace std;

void reverse(int arr[] , int n){

 int i = 0 ;
 int j = n - 1;
 while(i < j){
 	int temp = arr[i];
 	arr[i]= arr[j];
 	arr[j] =  temp ;
 	i++;
 	j--;
 }

	return;
}

int main(){

	int n;
	cout<<"Enter a Array Size = ";
	cin>>n;

	int arr[n];
	for(int i = 0 ; i<n ; i++){
		cout<<"Enter a Element Number "<<i+1<<" is "<<endl;
		cin>>arr[i];
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] << " " ;
		
	}

cout<<endl;

reverse(arr,n);

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] << " " ;
		
	}




	return 0;
}