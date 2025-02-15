#include<iostream>
using namespace std;

main(){
	int no;
	int i=0;
	
	cout<<"enter no :- ";
	cin>>no;
	
	while(no != 0){
		
		no = no / 10;
		i++;
		
	}
	cout<<"total count no :- "<<i<<endl;
}
