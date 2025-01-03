#include<bits/stdc++.h>
using namespace std;

int decToBin(int n) {
  if (n == 0) {
    return 0;
  }

  return n % 2 + 10 * decToBin(n / 2);
}

int main() {
  int n;
  cout << "Enter the decimal number: ";
  cin >> n;

  int ans = decToBin(n);

  cout << "Binary equivalent: " << ans << endl;
}