#include<iostream>
using namespace std;

main(){
	int i,j,s;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(s=i;s<=4;s++){
			cout<<" ";
		}
		for(s=i;s<=4;s++){
			cout<<" ";
		}
		for(j=i;j>=1;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
