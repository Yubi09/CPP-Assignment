#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return sum(arr, n - 1) + arr[n - 1];
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of all elements in the array is: " << sum(arr, n) << endl;
    return 0;
}