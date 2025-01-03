#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sortArray(vector<int> &arr, int n)
{
  int first = -1, second = -1;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      if (first == -1)
        first = i;
      else
        second = i + 1;
    }
  }
  if (second == -1)
    second = first + 1;
  swap(&arr[first], &arr[second]);
}

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sortArray(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
