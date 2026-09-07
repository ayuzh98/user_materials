#include <iostream>
using namespace std;

int main() {

int arr[7] = {1,2,6,1,1,2,3};

    for(int i = 0; i<=6 ; i++){
        bool flag = false;
        for(int j = i+ 1; j<7 ; j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        };
        if(flag == false ){
            cout<<"unquie number is "<<arr[i] <<endl;
            break;

        }
    }




    return 0;

}