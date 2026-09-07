#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Array Size = ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Element Number " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout <<endl<< "Array Elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " is a duplicate number" << endl;
                break;
            }
        }
    }

    return 0;
}