#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter the words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    bool anagram = true;

    sort(words[0].begin(), words[0].end());

    for (int i = 1; i < n; i++) {
      sort(words[i].begin(), words[i].end());
      if (words[i] != words[0]) {
        anagram = false;
        break;
      }
    }

    if (anagram) {
      cout << "True" << endl;
    } else {
      cout << "False" << endl;
    }
}