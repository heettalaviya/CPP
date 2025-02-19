#include<iostream>
using namespace std;

main(){
	int a[50] = {1,2,3,4,};
	int b[50] = {5,6,7,8,};
	int size_a = 4, size_b = 4;
	int merge[size_a+size_b];
	int i,j;
	
	for(i=0; i<4; i++){
		merge[i] = a[i];
	}
	
	for(j=0; j<4; j++){
		merge[i + j] = b[i];
	}
	
	for(i=0; i<size_a + size_b; i++){
		cout<<merge[i]<<" ";
	}
}
