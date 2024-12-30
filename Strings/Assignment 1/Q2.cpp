#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.size(); i++) {
        bool isVowel = false;
        for (int j = 0; j < 5; j++) {
            if (s[i] == vowels[j]) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            count++;
        }
    }
    cout << "Number of consonants: " << count << endl;
    return 0;
}