#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements in the array ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int min = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  cout << "Minimum element in the array is: " << min << endl;

  return 0;
}