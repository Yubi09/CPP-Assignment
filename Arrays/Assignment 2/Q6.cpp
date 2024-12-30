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

  int unique = 0;
  for (int i = 0; i < n; i++) {
    unique ^= arr[i];
  }

  cout << "The unique element is: " << unique << endl;

  return 0;
}