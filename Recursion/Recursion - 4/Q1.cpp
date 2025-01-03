class Solution
{
private:
  void f(int index, vector<int> &nums, vector<int> &set,
         vector<vector<int>> &ans)
  {
    ans.push_back(set);
    for (int i = index; i < nums.size(); i++)
    {
      set.push_back(nums[i]);
      f(i + 1, nums, set, ans);
      set.pop_back();
    }
  }

public:
  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<int> set;
    vector<vector<int>> ans;
    f(0, nums, set, ans);
    return ans;
  }
};