#include<iostream>
using namespace std;

main(){
	int a,b,c,d;
	cout<<"A value :- ";
	cin>>a;
	cout<<"B value :- ";
	cin>>b;
	cout<<"C value :- ";
	cin>>c;
	cout<<"D value :- ";
	cin>>d;
	
	if(a > b){
		if(a > c){
			if(a > d){
				cout<<"A is max";
			}else{
				cout<<"D is max";
			}
		}else {
			if(c > d){
				cout<<"C is max";
			}else{
				cout<<"D is max";
			}
		}
	}else{
		if(b > c){
			if(b > d){
				cout<<"B is max";
			}else{
				cout<<"D is max";
			}
		}else {
			if(c > d){
				cout<<"C is max";
			}else{
				cout<<"D is max";
			}
		}
	}
		
	
	
	

}
