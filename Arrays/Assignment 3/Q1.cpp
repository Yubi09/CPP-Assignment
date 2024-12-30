#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x;

  cout << "Enter the size of the array: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter the element: ";
  cin >> x;

  int count = 0;

  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] + arr[k] == x) {
          count++;
        }
      }
    }
  }

  cout << "The number of triplets whose sum is equal to " << x << " are: " << count << endl;

  return 0;
}