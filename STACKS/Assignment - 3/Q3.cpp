class Solution
{
private:
  int largestRectangleArea(vector<int> &histo)
  {
    stack<int> st;
    int maxA = 0;
    int n = histo.size();
    for (int i = 0; i <= n; i++)
    {
      while (!st.empty() && (i == n || histo[st.top()] >= histo[i]))
      {
        int height = histo[st.top()];
        st.pop();
        int width;
        if (st.empty())
          width = i;
        else
          width = i - st.top() - 1;
        maxA = max(maxA, width * height);
      }
      st.push(i);
    }
    return maxA;
  }

public:
  int maximalRectangle(vector<vector<char>> &matrix)
  {
    int maxArea = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> height(m, 0);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (matrix[i][j] == '1')
        {
          height[j]++;
        }
        else
          height[j] = 0;
      }
      int area = largestRectangleArea(height);
      maxArea = max(area, maxArea);
    }
    return maxArea;
  }
};