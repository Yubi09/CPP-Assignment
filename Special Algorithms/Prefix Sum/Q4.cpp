class Solution
{
public:
  vector<long long> findPrefixScore(vector<int> &nums)
  {
    int n = nums.size();
    vector<long long> ans;
    ans.clear();
    if (n == 0)
      return ans;
    ans.resize(n);
    int maxNum = nums[0];
    for (int i = 0; i < n - 1; i++)
    {
      ans[i] = nums[i] + maxNum;
      maxNum = max(maxNum, nums[i + 1]);
    }
    ans[n - 1] += nums[n - 1] + maxNum;

    for (int i = 1; i < n; i++)
    {
      ans[i] += ans[i - 1];
    }
    return ans;
  }
};