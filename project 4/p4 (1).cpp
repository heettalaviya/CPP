#include <iostream>
using namespace std;

main() {
    int n;

    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Negative elements in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

