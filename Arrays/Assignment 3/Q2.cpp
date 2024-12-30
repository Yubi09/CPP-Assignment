#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;

  cout << "Enter the number: ";
  cin >> n;

  vector<int> arr(1, 1);

  for (int i = 2; i <= n; i++) {
    int carry = 0;

    for (int j = 0; j < arr.size(); j++) {
      int product = arr[j] * i + carry;
      arr[j] = product % 10;
      carry = product / 10;
    }

    while (carry) {
      arr.push_back(carry % 10);
      carry /= 10;
    }
  }

  cout << "The factorial of " << n << " is: ";
  for (int i = arr.size() - 1; i >= 0; i--) {
    cout << arr[i];
  }
  cout << endl;

  return 0;
}