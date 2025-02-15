#include<iostream>
using namespace std;
main(){
	int a[]={1,2,3,5},size,i,sum=0;
	cout<<"enter array size :- ";
	cin>>size; 
	for(i=0;i<size;i++){
			cout<<a[i];
		
	}
	cout<<"print array element"<<endl;
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
		sum=sum+a[i];
	}
	cout<<" sum of array element :- "<<sum; 
}
