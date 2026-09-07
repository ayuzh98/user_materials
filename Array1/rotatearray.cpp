#include<iostream>
using namespace std;

void reverse(int arr[] , int starting,int ending){

 	for(int i =starting , j = ending;i < j ; i++,j--  ){
	int temp = arr[i];
 	arr[i]= arr[j];
 	arr[j] =  temp ;

 	}
 

	return;
}

int main(){

	int n;
	cout<<"Enter a Array Size = ";
	cin>>n;
cout<<endl;
 
 int k;
 cout<< "Enter the value of k = " ;
 cin>>k;
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


//steps
 k = k % n;
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] << " " ;

	}




	return 0;
}