#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int minSum(vector<int> arr, int n)
{
  insertionSort(arr, n);
  int num1 = 0, num2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      num1 = num1 * 10 + arr[i];
    else
      num2 = num2 * 10 + arr[i];
  }
  return num1 + num2;
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

  cout << minSum(arr, n) << endl;
  return 0;
}