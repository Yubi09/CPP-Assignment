#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements: ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<int> prefixSum(n);
  prefixSum[0] = arr[0];
  for(int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }
  cout << "Enter the left index and right index: ";
  int l, r;
  cin >> l >> r;

  if(l < 0 || r >= n || l > r) {
    cout << "Invalid input" << endl;
    return 0;
  }

  if(l == 0) {
    cout << prefixSum[r] << endl;
  } else {
    cout << prefixSum[r] - prefixSum[l - 1] << endl;
  }
  return 0;
}