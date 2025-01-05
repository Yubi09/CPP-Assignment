#include <iostream>
using namespace std;

int main() {
  char a, b;
  cout << "Enter two characters: ";
  cin >> a >> b;
  cout << "The difference between ASCII of " << a << " and " << b << " is: " << a - b << endl;
  return 0;
}