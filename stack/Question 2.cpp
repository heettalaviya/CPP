#include <iostream>
#include <stack>
using namespace std;


stack<int> sortStack(stack<int> &inputStack) {
    stack<int> tempStack;
    while (!inputStack.empty()) {
        int temp = inputStack.top();
        inputStack.pop();
        
                while (!tempStack.empty() && tempStack.top() > temp) {
            inputStack.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    return tempStack;
}


void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<int> s;
    s.push(30);
    s.push(10);
    s.push(50);
    s.push(20);
    s.push(40);
    
    cout << "Original stack: ";
    printStack(s);
    
    stack<int> sortedStack = sortStack(s);
    
    cout << "Sorted stack: ";
    printStack(sortedStack);
    
    return 0;
}

