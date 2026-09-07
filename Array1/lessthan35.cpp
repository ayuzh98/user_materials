#include <iostream>
using namespace std;
int main(){

	int marks [5] = {10 , 35 , 65 ,25 , 32};

	for(int i = 0; i<5; i++){

		if(marks[i] < 35)
			cout<<i<<" ";
	}
	return 0;
}