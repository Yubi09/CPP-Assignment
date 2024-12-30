#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements in the array ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max = arr[0];
  int secondMax = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      secondMax = max;
      max = arr[i];
    } else if (arr[i] > secondMax) {
      secondMax = arr[i];
    }
  }

  cout << "Second largest element in the array is: " << secondMax << endl;
  
  return 0;
}