#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
  int n, target;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the target element: ";
  cin >> target;
  int index = binarySearch(arr, target);
  if (index == -1)
    cout << "Element not found in the array." << endl;
  else
    cout << "Element found at index " << index << endl;
}