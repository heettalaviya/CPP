#include<iostream>
using namespace std;

main(){
	int a[50][50],b[50][50],i,j,row,col;
	
	cout<<"enter no. of row :- ";
	cin>>row;
	cout<<"enter no. of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Print matrix A"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"enter no. of row :- ";
	cin>>row;
	cout<<"enter no. of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>b[i][j];
		}
	}
	cout<<"Print matrix B"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Sum of two matrix"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j] + b[i][j]<<" ";
		}
		cout<<endl;
	}
}
