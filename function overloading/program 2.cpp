#include<iostream>
using namespace std;

class Arithmetic{
	public:
		void result(int a, int b){
			cout<<"sum :- "<<a+b<<endl;
		}
		void result(float a, float b){
			cout<<"sum :- "<<a+b<<endl;
		}
		void result(int a, int b, int c){
			cout<<"multiply :- "<<a*b*c<<endl;
		}
};
main(){
	Arithmetic a;
	a.result(2,3);
	a.result(3.6f,9.4f);
	a.result(1,2,3);
}
