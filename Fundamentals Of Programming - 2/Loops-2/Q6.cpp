// WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int rev = 0;
  int temp = n;
  while (temp > 0)
  {
    int digit = temp % 10;
    rev = rev * 10 + digit;
    temp /= 10;
  }
  cout << n + rev << endl;
  return 0;
}