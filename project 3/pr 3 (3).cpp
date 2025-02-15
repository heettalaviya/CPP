#include <iostream>
using namespace std;

main() {
    int s,n = 5; 

    for (int i = n; i >= 1; i--) {
    	for(s=5; s>i;+ s--){
    		cout<<"  ";	
		}
        for (int j = 1; j <= i; j++) {
            cout << (j % 2) << " "; 
        }
        cout << endl;
    }

    
}
