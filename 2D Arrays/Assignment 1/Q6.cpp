#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    cout << "Middle row: ";
    for (int i = 0; i < m; i++)
        cout << arr[n / 2][i] << " ";
    cout << endl << "Middle column: ";
    for (int i = 0; i < n; i++)
        cout << arr[i][m / 2] << " ";
    return 0;
}