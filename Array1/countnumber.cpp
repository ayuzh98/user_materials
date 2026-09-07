#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Array Size = ";
cin>>n;
int arr[n];

int x;
cout<<"Enter a Number = ";
cin>>x;


	for (int i = 0 ; i<n ; i++){
		
	cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>arr[i];
	}

	int count = 0;
	for(int i = 0; i< n; i++){
		if(arr[i]>x) count++;
	}
	cout<< "Given Array greater than a given number x is ";
	 cout<< count;

	return 0;
}