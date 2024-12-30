#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of the square matrix: ";
  cin >> n;
  int arr[n][n];
  cout << "Enter the elements of the matrix" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "The Output is:" << endl;
  for (int j = 0; j < n; j++)
  {
    if (j % 2 != 0)
    {
      for (int i = 0; i < n; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    {
      for (int i = n - 1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }
  }

  return 0;
}