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

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        cout << "Array contains duplicate elements" << endl;
        return 0;
      }
    }
  }
  
  cout << "Array does not contain duplicate elements" << endl;

  return 0;
}