#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= i; ++j)
      {
        cout << j << " ";
      }
    }
    else
    {
      for (char ch = 'A'; ch < 'A' + i; ++ch)
      {
        cout << ch << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
