// Find the first non-repeating element in the array

#include <iostream>
#include <vector>

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

  vector<int> count(1000000, 0);

  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    if (count[arr[i]] == 1) {
      cout << "The first non-repeating element in the array is: " << arr[i] << endl;
      break;
    }
  }

  return 0;
}