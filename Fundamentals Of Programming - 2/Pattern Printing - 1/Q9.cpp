#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    for(int k = 1; k <= n - i; ++k)
    {
      cout << " ";
    }
    for (char ch = 'A'; ch < 'A' + i; ++ch)
    {
      cout << ch;
    }
    cout << endl;
  }
  return 0;
}
