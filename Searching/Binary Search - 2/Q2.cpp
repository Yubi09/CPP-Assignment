#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int findPos(vector<int> &arr, int key)
{
    int l = 0, h = 1;
    int val = arr[0];

    while (val < key)
    {
        l = h;
        h = 2 * h;
        val = arr[h];
    }

    return binarySearch(arr, l, h, key);
}

int main() {
  int n;
  int key;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the key to be searched: ";
  cin >> key;
  int ans = findPos(arr, key);
  if (ans == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << ans << endl;
  }
}
