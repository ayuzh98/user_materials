
#include<iostream>
using namespace std;
int main(){
 	
   int arr[5];

      for (  int i = 0 ; i <= 4 ; i++ ){

     cout<<"Enter Element Number "<<i+1 << " is "<<" ";
      cin>>arr[i];
      }

  for (  int i = 0 ; i <= 4 ; i++ ){
cout<<"Element Number "<<i+1 << " is "<<" "<<arr[i]<<" "<<endl;
    
      }

	return 0;
}