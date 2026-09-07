#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number = ";
cin>>n;
int arr[n];

	for (int i = 0 ; i<n ; i++){
		
	cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>arr[i];
	}

	for(int  j  = 0 ; j <n ; j++){
		if(j%2 != 0) arr[j] *= 2;
		else arr[j] += 10;
	}

		for (int i = 0 ; i<n ; i++){
		
	cout<<" Element Number "<<i + 1<< "  will be "<< arr[i];
	 cout<<endl;
			
	}



	return 0;
}