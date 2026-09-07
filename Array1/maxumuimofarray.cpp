#include<iostream>
using namespace std;
int main(){

	int  arr[5] ;

	for(int i = 0 ; i<5 ; i++){
cout<<"Enter Element Number " << i + 1 << " is "<<endl;
cin>>arr[i];
	}

	int max = arr[0];

	for(int i = 1 ; i<= 4 ; i++ ){

			if (max<arr[i]){

				max = arr[i];
			}


	}

	cout<<"max ix "<< max;




	return 0;
}