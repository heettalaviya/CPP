#include<iostream>
using namespace std;

class circle{
	public:
		shape(){
			cout<<"circle shape"<<endl;
		}
};
class triangle:public circle{
	public:
		shape(){
			cout<<"triangle shape"<<endl;
		}
};
class square:public triangle{
	public:
		shape(){
			cout<<"square shape"<<endl;
		}
};
main(){
	circle c;
	triangle t;
	square s;
	
	c.shape();
	t.shape();
	s.shape();
}
