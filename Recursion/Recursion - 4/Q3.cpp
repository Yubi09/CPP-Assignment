#include <bits/stdc++.h>
using namespace std;

int recurLCS(string s1, string s2, int n, int m, int count) {
  if (n == 0 || m == 0) {
    return count;
  }

  if (s1[n - 1] == s2[m - 1]) {
    count = recurLCS(s1, s2, n - 1, m - 1, count + 1);
  }

  count = max(count, max(recurLCS(s1, s2, n, m - 1, 0), recurLCS(s1, s2, n - 1, m, 0)));
  return count;
}

int main() {
  string s1, s2;
  cout << "Enter the first string: ";
  cin >> s1;
  cout << "Enter the second string: ";
  cin >> s2;

  int n = s1.length();
  int m = s2.length();

  int len = recurLCS(s1, s2, n, m, 0);
  cout << "Length of longest common substring: " << len << endl;
}