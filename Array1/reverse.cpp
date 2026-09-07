#include<iostream>
 
using namespace std;

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
	 for (int i = n - 1 ; i>=0; i--){
		
	cout <<arr[i] << "  ";
			
	}
	return 0;}