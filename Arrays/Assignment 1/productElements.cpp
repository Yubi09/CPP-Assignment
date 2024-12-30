#include<iostream>
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

  long long p = arr[0];

  for (int i = 1; i < n; i++) {
    p = p * arr[i];
  }

  cout << "Product of all elements in the array is: " << p << endl;

  return 0;
}