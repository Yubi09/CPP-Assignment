#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter the dimensions of the matrix: ";
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    }
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int sum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++)
            sum += A[i][j];
    }
    cout << sum;
    return 0;
}