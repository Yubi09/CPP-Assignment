#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < 2 * n - 1; i++)
  {
    cout << (char)('A' + i) << " ";
  }

  cout << endl;

  for(int i = 1; i <= n - 1; i++)
  {
    for(int j = 1; j <= n - i; j++)
    {
      cout << (char)('A' + j - 1) << " ";
    }
    for(int k = 1; k <= 2 * i - 1; k++)
    {
      cout << "  ";
    }
    for(int l = n + 1; l <= 2 * n - i; l++)
    {
      cout << (char)('A' + l - 1) << " ";
    }
    cout << endl;
  }

  return 0;
}