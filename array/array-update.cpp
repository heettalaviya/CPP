#include<iostream>
using namespace std;
main(){
	
	int a[50]={10,20,30,40,50};
	int pos=2,size=5,value=25,i;
	
	
	a[pos] = value;
	
	
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
}
