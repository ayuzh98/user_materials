 #include<iostream>
using namespace std;
int main(){

	int n;
	cout<<"Enter Array Size = "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		cout<<"Enter Element Number "<<i+1<< " is = ";
		cin>>arr[i];

	}
	cout<<endl;
	int x;
	cout<<"Enter the Element you want to search = ";
	cin>>x;

	//search
	//check mark
	bool flag= false; //false means element is not present 
	for(int i = 0; i<n ; i++){
		if(arr[i] == x)	flag =true;
	}
	cout<<endl;

	if(flag == true) cout <<"Element Found";
	else cout<<"404 Element not found";

	return 0;
}