#include<iostream>
#include<climits>
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
	cout<<endl;
	//min
	int min = INT_MAX;
	for(int i = 0 ; i<n ; i++){
		if(min>arr[i])	min = arr[i];
	}
	//second min
	int smin = INT_MAX;
	for(int i = 0 ; i<n ; i++){
		if(smin>arr[i] && arr[i] != min)	smin = arr[i];
	}
	 cout<<"Second Min Element is "<<smin;
	 return 0;
	}