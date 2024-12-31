#include <iostream>
#include <vector>

using namespace std;

int countOnes(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return n - mid;
            }
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << countOnes(arr) << endl;
    return 0;
}