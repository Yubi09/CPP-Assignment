#include<iostream>
#include<string>

using namespace std;

bool isVowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;
  int count = 0;
  int currLength = 0;

  for(char ch : s) {
    if(isVowel(ch)) {
      currLength++;
    } else {
      count += (currLength * (currLength + 1)) / 2;
      currLength = 0;
    }
  }

  if(currLength > 0) {
    count += (currLength * (currLength + 1)) / 2;
  }

  cout << "The number of substrings that contain only vowels is: " << count << endl;

  return 0;
}
