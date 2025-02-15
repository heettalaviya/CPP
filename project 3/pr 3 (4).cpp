#include <iostream>
using namespace std;

main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (int j = n - i; j <= n; j++) {
            cout << j << " ";
        }
        for (int j = n - 1; j >= n - i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
}
