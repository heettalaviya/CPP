#include <iostream>
#include <stack>
#include <vector>
using namespace std;


vector<int> nextGreaterElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> s;
    
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}


void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {4, 5, 2, 25, 7, 8};
    
    cout << "Original array: ";
    printArray(arr);
    
    vector<int> result = nextGreaterElement(arr);
    
    cout << "Next greater elements: ";
    printArray(result);
    
    return 0;
}

