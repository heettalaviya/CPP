#include<iostream>
using namespace std;
main(){
	
	int a[50]={10,20,40,50,60,70};
	int pos=2,value=30,size=6,i;
	
	
	for(i=size-1;i>=pos;i--){
		a[i+1] = a[i];
	}
	a[pos] = value;
	size++;
	
	
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
}
