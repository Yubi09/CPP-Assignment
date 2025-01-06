#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i; j++) {
      cout << " ";
    }
    cout << i + 1;
    if(i == 0) {
      cout << endl;
      continue;
    }
    for(int k = 0; k < 2 * i - 1; k++) {
      cout << " ";
    }
    cout << i + 1 << endl;
  }
}