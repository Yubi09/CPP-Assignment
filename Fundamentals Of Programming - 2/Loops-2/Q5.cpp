// WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  while (n > 0)
  {
    int digit = n % 10;
    if (digit % 2 == 0)
    {
      sum += digit;
    }
    n /= 10;
  }
  cout << sum << endl;
  return 0;
}