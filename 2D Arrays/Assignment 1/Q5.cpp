// Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int maxSum = 0;
    int maxSumRow;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumRow = i;
        }
    }

    cout << "The row with the maximum sum is: " << maxSumRow << endl;

    // Input 1 : 
    // 1 3 5 7
    // 3 4 7 8
    // 1 4 12 3
    // Output: 1 
    // as 1 row has the maximum sum of 3 + 4 + 7 + 8 = 22

        return 0;
}