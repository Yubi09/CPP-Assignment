#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Input: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool firstRowZero = false, firstColZero = false;
    for(int i = 0; i < m; i++) {
        if(matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        if(matrix[0][i] == 0) {
            firstRowZero = true;
            break;
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if(firstRowZero) {
        for(int i = 0; i < n; i++) {
            matrix[0][i] = 0;
        }
    }
    if(firstColZero) {
        for(int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }

    cout << "Output: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}