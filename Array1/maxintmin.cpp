#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter Element Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = INT_MIN;

    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "Max is " << max;

    return 0;
}