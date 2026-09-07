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
int x;
	cout<<"Enter a Number = ";
	cin>>x;
int index;
bool flag = false; //false means not present 
for(int i = 0 ; i< n ; i++){
	if(arr[i]==x){
		flag = true;
		index = i;
		break; //true means present
	}
}

if(flag==false) {cout<< x <<" is not Present in the Array";}
else {cout<< x <<" is Present in the Array and its index is "<< index ;}


	return 0;
}