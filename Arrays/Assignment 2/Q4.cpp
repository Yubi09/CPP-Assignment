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

  int sumEven = 0;
  int sumOdd = 0;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      sumEven += arr[i];
    } else {
      sumOdd += arr[i];
    }
  }

  cout << "The difference between the sum of elements at even indices to the sum of elements at odd indices is: " << sumEven - sumOdd << endl;

  return 0;
}