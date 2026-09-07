#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter a Array Size = ";
	cin>>n;

	int arr[n];
	for(int i = 0 ; i<n ; i++){
		cout<<"Enter a Element Number "<<i+1<<" is = ";
		cin>>arr[i];
	}
	cout<<endl;
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] << " " ;
		}
		cout<<endl;
		int sum = 0 ;
		for(int i = 0; i<=n-2 ;i++){ //bcz there are n-1 elment and 1 element is missing
			sum += arr[i];
		}
		int sum2 = n *(n +1)/2;
		//s = (n(n+1))/2 sum of n number
		cout<<"The missing number is "<<sum2- sum<<endl;



	return 0;
}