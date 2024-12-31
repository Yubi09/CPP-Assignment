#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<string> &arr, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<string> arr(n);

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bubbleSort(arr, n);

  cout << "The sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}