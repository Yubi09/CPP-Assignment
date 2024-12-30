#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      cout << "The array is not sorted." << endl;
      return 0;
    }
  }

  cout << "The array is sorted." << endl;

  return 0;
}