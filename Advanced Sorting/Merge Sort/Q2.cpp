class Solution
{
private:
  int Merge(vector<int> &nums, int l, int mid, int r, int count)
  {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
      L[i] = nums[l + i];
    for (int i = 0; i < n2; i++)
      R[i] = nums[mid + 1 + i];
    int i = 0, j = 0;
    while (i < n1)
    {
      while (j < n2 && (long long)L[i] > 2 * (long long)R[j])
      {
        j++;
      }
      count += j;
      i++;
    }
    i = 0, j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
      if (L[i] <= R[j])
      {
        nums[k++] = L[i++];
      }
      else
      {
        nums[k++] = R[j++];
      }
    }

    while (i < n1)
      nums[k++] = L[i++];
    while (j < n2)
      nums[k++] = R[j++];

    return count;
  }

  int MergeCount(vector<int> &nums, int l, int r, int count)
  {
    if (l < r)
    {
      int mid = (l + r) / 2;
      count = MergeCount(nums, l, mid, count);
      count = MergeCount(nums, mid + 1, r, count);
      count = Merge(nums, l, mid, r, count);
    }
    return count;
  }

public:
  int reversePairs(vector<int> &nums)
  {
    int count = 0;
    return MergeCount(nums, 0, nums.size() - 1, count);
  }
};