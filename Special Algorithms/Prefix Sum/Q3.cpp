class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int n = nums.size();
    if (n == 0)
      return -1;

    vector<int> preSum(n);
    preSum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
      preSum[i] = nums[i] + preSum[i - 1];
    }
    int totalSum = preSum[n - 1];
    for (int i = 0; i < n; i++)
    {
      if (i == 0)
      {
        int r = totalSum - nums[i];
        if (r == 0)
          return 0;
      }
      else
      {
        int rightSum = totalSum - preSum[i];
        if (rightSum == preSum[i - 1])
          return i;
      }
    }

    return -1;
  }
};