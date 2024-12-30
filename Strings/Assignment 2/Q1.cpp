#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string s1 = s;
    reverse(s1.begin(), s1.end());
    s += s1;

    cout << "The new string is: " << s << endl;
}