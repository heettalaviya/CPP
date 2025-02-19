#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

   
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "The 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    int rowIndex, colIndex;
    cout << "Enter row index to find sum: ";
    cin >> rowIndex;
    cout << "Enter column index to find sum: ";
    cin >> colIndex;

   
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        rowSum += arr[rowIndex][j];
    }

    
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += arr[i][colIndex];
    }

    
    cout << "Sum of row " << rowIndex << " = " << rowSum << endl;
    cout << "Sum of column " << colIndex << " = " << colSum << endl;

    return 0;
}

