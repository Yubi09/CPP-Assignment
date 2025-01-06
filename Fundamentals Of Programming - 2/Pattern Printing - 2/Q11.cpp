#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int stars = n - 1;
  int spaces = 1;

  for(int i = 1; i <= 2 * n - 1; i++)
  {
    cout << "*";
  }
  cout << endl;

  for (int i = 1; i < n; ++i)
  {
    for (int j = 0; j < stars; ++j)
    {
      cout << "*";
    }
    for (int j = 1; j <= spaces; ++j)
    {
      cout << " ";
    }
    for (int j = 0; j < stars; ++j)
    {
      cout << "*";
    }
    cout << endl;
    stars--;
    spaces += 2;
  }

  int stars2 = 2;
  spaces -= 4;
  for (int i = 1; i < n - 1; ++i)
  {
    for (int j = 0; j < stars2; ++j)
    {
      cout << "*";
    }
    for (int j = 1; j <= spaces; ++j)
    {
      cout << " ";
    }
    for (int j = 0; j < stars2; ++j)
    {
      cout << "*";
    }
    cout << endl;
    stars2++;
    spaces -= 2;
  }

  for(int i = 1; i <= 2 * n - 1; i++)
  {
    cout << "*";
  }
  cout << endl;
  
  return 0;
}
