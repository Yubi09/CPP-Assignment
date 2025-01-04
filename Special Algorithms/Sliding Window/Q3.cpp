class Solution
{
  int countAtMostK(const vector<int> &nums, int k)
  {
    int n = nums.size();
    int left = 0, count = 0, oddCount = 0;

    for (int right = 0; right < n; right++)
    {
      if (nums[right] % 2 != 0)
      {
        oddCount++;
      }

      while (oddCount > k)
      {
        if (nums[left] % 2 != 0)
        {
          oddCount--;
        }
        left++;
      }

      count += right - left + 1;
    }

    return count;
  }

public:
  int numberOfSubarrays(vector<int> &nums, int k)
  {
    return countAtMostK(nums, k) - countAtMostK(nums, k - 1);
  }
};