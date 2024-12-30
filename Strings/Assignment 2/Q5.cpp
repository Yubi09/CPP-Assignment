#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    string maxWord = "";
    string currWord = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (currWord > maxWord) {
                maxWord = currWord;
            }
            currWord = "";
        } else {
            currWord += s[i];
        }
    }
    if (currWord > maxWord) {
        maxWord = currWord;
    }
    cout << maxWord << endl;
}

