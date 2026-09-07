#include<iostream>
using namespace std;
int main(){
 int product = 1;
 		int prod[5];
 		for(int i= 0; i<= 4 ; i++){
 				cin>>prod[i];
 		}
 		for(int i=0; i<=4;i++){

 			product = product * prod[i];}

 			cout<<"product of array "<<product;

	return 0;
}