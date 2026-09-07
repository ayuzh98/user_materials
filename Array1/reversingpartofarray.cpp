#include<iostream>
using namespace std;

void reverse(int arr[] , int starting,int ending){

 // int i =starting ;
 // int j = ending;
 // while(i < j){
 	// int temp = arr[i];
 	// arr[i]= arr[j];
 	// arr[j] =  temp ;
 // 	i++;
 // 	j--;

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
	int starting ;
	cout<<"Enter starting index = ";
	cin>>starting;
	cout<<endl;
	int ending ;
	cout<<"Enter endling index = ";
	cin>>ending;
	cout<<endl;


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

reverse(arr,starting,ending);

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] << " " ;

	}




	return 0;
}