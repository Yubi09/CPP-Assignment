#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    for(int j = 1; j <= n - i; j++)
    {
      cout << j << " ";
    }
    for(int k = 1; k <= 2 * i - 1; k++)
    {
      cout << "  ";
    }
    for(int l = n - i; l >= 1; l--)
    {
      if(l != n)
        cout << l << " ";
    }
    cout << endl;
  }

  return 0;
}