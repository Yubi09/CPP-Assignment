#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 500; i++)
  {
    int n = i;
    int sum = 0;
    while (n > 0)
    {
      int digit = n % 10;
      sum += digit * digit * digit;
      n /= 10;
    }
    if (sum == i)
    {
      cout << i << endl;
    }
  }
  return 0;
}