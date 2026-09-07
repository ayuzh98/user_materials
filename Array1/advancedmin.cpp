#include<iostream>
#include<climits>
using namespace std;
int main(){

	int n ;
	cin>>n;
	int arr[n];
	for (int i = 0 ; i < n ; i++){
		cout<<"Enter Element Number "<<i+1<<" is "<<endl;
		cin>>arr[i];
	}
	int min = INT_MAX;
	for(int i = 0 ; n> i ; i++){
		if(min>arr[i])
			min = arr [i];
		
	}
	cout <<"Min value is "<< min;

	return 0;

}
