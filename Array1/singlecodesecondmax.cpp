#include<iostream>
#include<climits>
using namespace std;
int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i = 0 ; i<n ; i++){
		cin>>arr[i];
	}
cout<<endl;

	int max = INT_MIN;
	int smax = INT_MIN;
	 for(int i = 0 ; i< n ; i++){
	 	if(max<arr[i]){
	 		smax = max;
	 		max =  arr[i];
	 	}
	 	else if(max !=arr[i]&& smax<arr[i]){  //max>arr[i]
	 		smax = arr[i];
	 	}
	 }
cout<<max;
cout<<endl;
cout<<smax;



	return 0;
}