#include<iostream>
using namespace std;

main(){
	int a,b,c;
	cout<<"A value :- ";
	cin>>a;
	cout<<"B value :- ";
	cin>>b;
	cout<<"C value :- ";
	cin>>c;
	
	if(a > b){
		if(a > c){
			cout<<"A is max";
		}else{
			cout<<"B is max";
		}
	}else{
		if(b > c){
			cout<<"B is max";
		}else{
			cout<<"C is max";
		}
	}
	
	
	

}
