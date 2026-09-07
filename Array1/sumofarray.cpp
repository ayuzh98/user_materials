#include<iostream>
using namespace std;
int main(){

	int arr[5]={1 , 2 , 3 , 4 ,5} , sum = 0;

	 int i=0;
	 while(i<=4){
sum = sum + arr[i];
i++;
	 }

cout<<"sum "<<sum;

	return 0;
}