// Check if an array is a subset of another .

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;

  cout << "Enter the size of the first array: ";
  cin >> n;

  vector<int> arr1(n);

  cout << "Enter the elements of the first array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }

  cout << "Enter the size of the second array: ";
  cin >> m;

  vector<int> arr2(m);

  cout << "Enter the elements of the second array: ";
  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
  }

  int i = 0, j = 0;

  while (i < n && j < m) {
    if (arr1[i] == arr2[j]) {
      i++;
      j++;
    } else {
      i++;
    }
  }

  if (j == m) {
    cout << "The second array is a subset of the first array." << endl;
  } else {
    cout << "The second array is not a subset of the first array." << endl;
  }

  return 0;
}