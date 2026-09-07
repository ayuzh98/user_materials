#include<iostream>
using namespace std;
int main(){
 	int arr[5] = { 2, 4 , 8 , 1  };
 	float a[3]={ 1.2 , 4.5,5.7};
 	char b[3] = {'A','b','%'};
 	arr[4] = 100 ; //{2,4,8,100} //updation
 	arr[1] = 1; //{2,1,8,100}
 	cout<<arr[0] << " "<<arr[1]<<" "<<arr[4];
 	cout<<endl;
   cout<<a[0] << " "<<a[1]<<" "<<a[2] <<endl;
   cout<<b[0] << " "<<b[1]<<" "<<b[2];
	return 0;
}