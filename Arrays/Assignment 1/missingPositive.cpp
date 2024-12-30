#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements in the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  int missingPositive = 1;
  for (int i = 1; i <= max; i++) {
    bool found = false;
    for (int j = 0; j < n; j++) {
      if (arr[j] == i) {
        found = true;
        break;
      }
    }
    if (!found) {
      missingPositive = i;
      break;
    }
  }

  cout << "The smallest positive missing number is: " << missingPositive << endl;

  return 0;
}