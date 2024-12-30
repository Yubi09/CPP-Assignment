#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        num = num * 10 + (s[i] - '0');
    }
    cout << "The integer value of the string is: " << num << endl;
    return 0;
}