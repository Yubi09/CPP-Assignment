#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;
  int max = INT_MIN, secondMax = INT_MIN;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      int num = s[i] - '0';
      if (num > max) {
        secondMax = max;
        max = num;
      } else if (num > secondMax && num != max) {
        secondMax = num;
      }
    }
  }
  if (secondMax == INT_MIN) {
    cout << "No second largest digit found." << endl;
  } else {
    cout << "The second largest digit is: " << secondMax << endl;
  }
}