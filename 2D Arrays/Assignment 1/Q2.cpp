#include <iostream>
using namespace std;

int main() {
  int m, n;
  cout << "Enter the number of rows and columns: ";
  cin >> m >> n;

  int arr1[m][n], arr2[m][n];

  cout << "Enter the elements of the first matrix: ";
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      cin >> arr1[i][j];
    }
  }

  cout << "Enter the elements of the second matrix: ";
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      cin >> arr2[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr1[i][j] += arr2[i][j];
    }
  }

  cout << "The sum of the two matrices is: " << endl;
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}