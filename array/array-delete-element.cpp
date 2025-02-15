#include<iostream>
using namespace std;
main(){
	
	int a[50]={10,20,30,40,50};
	int pos=2,size=5,i;
	
	
	for(i=pos;i<=size-1;i++){
		a[i] = a[i+1];
	}
	size--;
	
	
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
}
