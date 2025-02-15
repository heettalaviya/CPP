#include <iostream>
using namespace std;

int main() {
    int number, fd, ld;
	cout << "Enter a number: ";
    cin >> number;
	ld = number % 10;

    
    fd = number;
    while (fd >= 10) {
        fd /= 10;
    }
	int sum = fd + ld;
	
	cout << "Sum of first and last digits: " << sum << endl;

    
}
