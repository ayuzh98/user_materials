#include<iostream>
using namespace std;
int main(){

	int  arr[5] ;
    for (int i = 0; i < 5; i++) {
        cout << "Enter Element Number " << i + 1 << ": ";
        cin >> arr[i];
    }
	int min = arr[0];

	for(int i = 1 ; i<= 4 ; i++ ){

			if (min>arr[i]){

				min = arr[i];
			}


	}

	cout<<"min is "<< min;

	return 0;
}