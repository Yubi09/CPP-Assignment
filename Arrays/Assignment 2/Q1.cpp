#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int n, x;

  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the element: ";
  cin >> x;

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > x)
    {
      count++;
    }
  }

  cout << "The number of elements greater than " << x << " are: " << count << endl;

  return 0;
}