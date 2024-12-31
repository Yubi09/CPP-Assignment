#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &arr, int l, int r, int &count) {
    if (l < r) {
        int x = arr[r], i = l;
        for (int j = l; j <= r - 1; j++) {
            if (arr[j] <= x) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[r]);
        count++;
        quickSort(arr, l, i - 1, count);
        quickSort(arr, i + 1, r, count);
    }
}

int minOperations(vector<int> &arr) {
    int count = 0;
    quickSort(arr, 0, arr.size() - 1, count);
    return count;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minOperations(arr) << endl;

    return 0;
}

