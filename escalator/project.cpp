#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create an int stack
    stack<int> number;
    int choise,ele;

    while(1){
       
        cout<<"Enter press 1 element add in stack :- "<<endl;
        cout<<"Enter press 2 element view in stack :- "<<endl;
        cout<<"Enter press 3 element delete in stack :- "<<endl;
        cout<<"Enter press 4 element update in stack :- "<<endl;
        cout<<"Enter press 5 stack size :- "<<endl;
        cout<<"Enter press 6 exit :- ";
       
        cin>>choise;
       
        if(choise == 6){
        cout<<"Thank you"<<endl;
        break;
}

switch(choise){
case 1:
cout<<"Enter Element add in stack :- ";
cin>>ele;
number.push(ele);
cout<<"Elements add in stack"<<endl;
break;

case 2:
if(!number.empty()){
cout<<"Print top elemet in stack :- "<<number.top()<<endl;
}
break;

case 3:
cout<<"Delete Elemets"<<endl;
break;

case 4:
cout<<"Update Elemets"<<endl;
break;

case 5:
cout<<"Stack size :- "<<number.size()<<endl;
break;
}
       
    }
   
}
