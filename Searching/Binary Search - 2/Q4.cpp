#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int target)
{
  int n = arr.size();
  int l = 0, h = n - 1;
  while(l <= h) {
    int mid = l + (h - l) / 2;
    if(arr[mid] == target) {
      return true;
    }
    if(arr[l] == arr[mid] && arr[mid] == arr[h]) {
      l++;
      h--;
    } else if(arr[l] <= arr[mid]) {
      if(target >= arr[l] && target < arr[mid]) {
        h = mid - 1;
      } else {
        l = mid + 1;
      }
    } else {
      if(target > arr[mid] && target <= arr[h]) {
        l = mid + 1;
      } else {
        h = mid - 1;
      }
    }
  }
}

int main()
{
    int n;
    int key;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched: ";
    cin >> key;
    bool ans = search(arr, key);
    if (!ans)
    {
        cout << "FALSE" << endl;
    }
    else
    {
        cout << "TRUE" << endl;
    }

}