#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int a = 0, b = 1;
  cout << "First " << n << " fibonacci numbers are: ";
  for (int i = 0; i < n; i++)
  {
    cout << a << " ";
    int temp = a;
    a = b;
    b = temp + b;
  }
  return 0;
}