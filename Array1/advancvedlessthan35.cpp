#include <iostream>
using namespace std;
int main(){

	int marks [5] ;

	for(int i = 0; i<5; i++){

		cin >> marks[i];
	}

	for(int i = 0; i<5; i++){ //i<=4 or i<5

		if(marks[i] < 35)
			cout<<marks[i] <<" index "<<i<<endl;
			
	}
	return 0;
}