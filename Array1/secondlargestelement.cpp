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
	//max
	int max = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		if(max<arr[i])	max = arr[i];
	}
	//second max
	int smax = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		if(smax<arr[i] && arr[i]!=max)	smax = arr[i];
	}
	 cout<<"Second Max Element is "<<smax;
	 return 0;
	}