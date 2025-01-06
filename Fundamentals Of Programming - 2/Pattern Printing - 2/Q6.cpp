#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    for (int k = 0; k < i; k++)
    {
      cout << " ";
    }
    cout << "*";
    int l = 2 * (n - i - 1);
    for (int m = 0; m < l - 1; m++)
    {
      cout << " ";
    }
    cout << "*" << endl;
  }
  for (int i = 0; i < n - 1; ++i)
  {
    cout << " ";
  }
  cout << "*" << endl;
  return 0;
}