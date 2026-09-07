#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	 int arr[n];
	 int b[n];

	 for(int i = 0 ; i<n ; i++){
	 	cin>>arr[i];
	 }

	 cout<<endl;

	 for(int i = 0 ; i < n ; i++){
	 	b[i] = arr[n - 1 - i];
	 }
		 for(int i = 0 ; i<n ; i++){
	 	cout<<b[i]<<" ";
	 }





	return 0;
}