#include<iostream>
using namespace std;
int main(){

		int a[5];

		for(int i = 0 ; i<= 4 ; i++) {

			cout<<"Enter Element Number "<<i + 1<< " is "<< endl;
			cin>>a[i];
		}
cout<<"Reverse number are"<<endl;
		for (int j = 4 ; j>=0 ; j--){

			cout<<a[j]<< " ";
		}


	return 0;
}