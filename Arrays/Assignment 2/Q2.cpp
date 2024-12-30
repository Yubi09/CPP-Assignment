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

  int firstLargest = arr[0];
  int secondLargest = arr[1];
  int thirdLargest = arr[2];

  for (int i = 0; i < n; i++) {
    if (arr[i] > firstLargest) {
      thirdLargest = secondLargest;
      secondLargest = firstLargest;
      firstLargest = arr[i];
    } else if (arr[i] > secondLargest) {
      thirdLargest = secondLargest;
      secondLargest = arr[i];
    } else if (arr[i] > thirdLargest) {
      thirdLargest = arr[i];
    }
  }

  cout << "The three largest elements are: " << firstLargest << ", " << secondLargest << ", " << thirdLargest << endl;

  return 0;
}