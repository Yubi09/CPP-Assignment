#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bool isAlmostSorted = true;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      if (i + 2 < n && arr[i] > arr[i + 2]) {
        isAlmostSorted = false;
        break;
      }
    }
  }

  if (isAlmostSorted) {
    cout << "The array is almost sorted." << endl;
  } else {
    cout << "The array is not almost sorted." << endl;
  }

  return 0;
}