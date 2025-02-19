#include<iostream>
using namespace std;
main(){
	int a[50][50],i,j,row,col;
	cout<<"Enter no of row :- ";
	cin>>row;
	cout<<"Enter no of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Print matrix"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
