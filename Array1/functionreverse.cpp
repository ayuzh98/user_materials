#include<iostream>
 
using namespace std;

void reverse(int arr[] ,int n){
	for(int i = 0 , j = n ; i<j ; i++,j--){
		//arr[i]and arr[j]
		int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

	}

	return;
}

int main(){
int n;
cout<<"Array Size = ";
cin>>n;
int arr[n];

	for (int i = 0 ; i<n ; i++){
		
	cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>arr[i];
	}
	for (int i = 0 ; i<n ; i++){
		
	cout <<arr[i] << "  ";
			
	}
	 cout<<endl<<"Reverse Order"<<endl;
	 reverse(arr ,n - 1);
		for (int i = 0 ; i<n ; i++){
		
	cout <<arr[i] << "  ";
			
	}
	
	return 0;}