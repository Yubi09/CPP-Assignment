#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the matrix" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The Output is:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i == n - j - 1) {
                cout << arr[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}