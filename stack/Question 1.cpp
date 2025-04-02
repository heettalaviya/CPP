#include <iostream>
#define MAX 100 

using namespace std;

class Stack {
private:
    int top;
    int arr[MAX]; 

public:
    Stack() { top = -1; } 

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << "\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack.\n";
    }

    void traverse() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.traverse();
    return 0;
}

