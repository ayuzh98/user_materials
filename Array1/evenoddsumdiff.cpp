#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Array Size = ";
cin>>n;
int arr[n];

int SumEven = 0;
int SumOdd = 0;


	for (int i = 0 ; i<n ; i++){
		
	cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>arr[i];
	}

	
	for(int i = 0; i< n; i++){
	 if(i%2 == 0) SumEven += arr[i];
	 else SumOdd += arr[i];
	}

	cout<<"SumEven is " <<SumEven <<endl;
	cout<<"SumOdd is " <<SumOdd <<endl;
	cout<<"Difference = " <<SumEven - SumOdd;
	return 0;
}