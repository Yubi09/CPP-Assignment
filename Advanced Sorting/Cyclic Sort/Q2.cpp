class Solution
{
public:
  vector<int> findErrorNums(vector<int> &nums)
  {
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      while (nums[i] != nums[nums[i] - 1])
      {
        swap(nums[i], nums[nums[i] - 1]);
      }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
      if ((i + 1) != nums[i])
      {
        ans.push_back(nums[i]);
        ans.push_back(i + 1);
      }
    }
    return ans;
  }
};