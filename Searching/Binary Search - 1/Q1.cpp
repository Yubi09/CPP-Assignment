#include <iostream>
#include <vector>

using namespace std;

int lastOccurrence(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to find: ";
    cin >> x;

    cout << lastOccurrence(arr, x) << endl;
    return 0;
}