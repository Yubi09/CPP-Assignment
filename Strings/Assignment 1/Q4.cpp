#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (s.size() % 2 != 0) {
        cout << "Please enter a string of even length." << endl;
        return 0;
    }
    int mid = s.size() / 2;
    string firstHalf = s.substr(0, mid);
    string secondHalf = s.substr(mid);

    for (int i = 0; i < secondHalf.size() / 2; i++) {
        swap(secondHalf[i], secondHalf[secondHalf.size() - i - 1]);
    }

    s = firstHalf + secondHalf;

    cout << "Updated string: " << s << endl;
    return 0;
}