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
	int smax = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		if(max<arr[i])	{ 
			smax = max; //smax is now prevoius max
			max = arr[i]; //max is now a new max
		}

			else if(smax<arr[i] && max!=arr[i]){ // max > arr[i]
				smax = arr[i];
			}
	}
	
	 cout<<"Second Max Element is "<<smax;
	 return 0;
	}