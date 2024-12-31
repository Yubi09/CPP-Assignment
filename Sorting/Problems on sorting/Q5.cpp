#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr, int n)
{
  int l = 0, r = INT_MAX;

  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] < arr[i + 1])
      r = min(r, (arr[i] + arr[i + 1]) / 2);

    else if (arr[i] > arr[i + 1])
      l = max(l, (arr[i] + arr[i + 1] + 1) / 2);
  }

  if(l > r) {
    cout << "-1" << endl;
  }

  else 
    cout << l << endl;
}


int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  f(arr, n);

  return 0;
}