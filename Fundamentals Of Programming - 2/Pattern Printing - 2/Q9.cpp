#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s = 0;
  for(int i = 1; i <= n; i++) {
    int totalSpaces = n - (i - 1);
    for(int j = 1; j <= totalSpaces; j++) {
      cout << " ";
    }
    cout << "*";
    if(i == 1) {
      cout << endl;
      continue;
    }
    for(int k = 1; k <= s; k++) {
      cout << " ";
    }
    cout << "*";
    for(int l = 1; l <= s; l++) {
      cout << " ";
    }
    cout << "*" << endl;
    s++;
  }
  for(int i = 1; i <= 2 * n + 1; i++) {
    cout << "*";
  }
  cout << endl;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << " ";
    }
    cout << "*";
    if(i == n) {
      cout << endl;
      continue;
    }
    for(int k = 1; k <= s - 1; k++) {
      cout << " ";
    }
    cout << "*";
    for(int l = 1; l <= s - 1; l++) {
      cout << " ";
    }
    cout << "*" << endl;
    s--;
  }
}