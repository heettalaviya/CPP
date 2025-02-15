#include<iostream>
using namespace std;

main(){
	
	int no1=0, no2=1 ,i ,no3;
	cout<<no1<<" "<<no2<<" ";
	for loop(i=2; i<15, i++){
		no3 = no1 = no2;
		cout<<no3<<" ";
		no1 = no2;
		no2 = no3;
	}
}
