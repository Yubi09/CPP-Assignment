#include <iostream>
using namespace std;

int calculateFactorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int fact = calculateFactorial(i);
    cout << fact << endl;
  }
  return 0;
}