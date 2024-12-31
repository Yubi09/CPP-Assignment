#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int low = 1, high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= mid)
            {
                count++;
            }
        }
        if (count > mid)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << findDuplicate(nums) << endl;
    return 0;
}