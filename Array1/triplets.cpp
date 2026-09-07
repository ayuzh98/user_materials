#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Array Size = ";
cin>>n;
int arr[n];

int x ;
cout<<"sum is equal to the given value x = " ;
cin>>x;
cout<<endl;
int totalpairs = 0;
	for (int i = 0 ; i<n ; i++){
		
	cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>arr[i];
	}
	for (int i = 0 ; i<n ; i++){
		
	cout <<arr[i] << "  ";
			
	}
	cout<<endl;
	for (int i = 0 ; i<n ; i++){
		for(int j =  i+1 ; j<n ; j++){
			for(int k = j+1 ; k < n ; k++){
						if(arr[i]+arr[j] + arr[k]== x) 
						 {
							totalpairs++;
							cout << "(" << arr[i] << "," << arr[j] << ","<<arr[k]<<")" << endl;}}
		}
	}
	 cout<<"Totalpairs is "<<totalpairs;

	 return 0;}

