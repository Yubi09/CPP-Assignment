class Solution
{
public:
  int calPoints(vector<string> &operations)
  {
    stack<int> st;
    int total = 0;

    for (auto op : operations)
    {
      if (op == "C")
      {
        st.pop();
      }
      else if (op == "D")
      {
        st.push(st.top() * 2);
      }
      else if (op == "+")
      {
        int prev1 = st.top();
        st.pop();
        int prev2 = st.top();
        st.push(prev1);
        st.push(prev1 + prev2);
      }
      else
      {
        st.push(stoi(op));
      }
    }

    while (!st.empty())
    {
      total += st.top();
      st.pop();
    }

    return total;
  }
};