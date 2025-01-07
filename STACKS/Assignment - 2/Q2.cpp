/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  vector<int> nextLargerNodes(ListNode *head)
  {
    vector<int> arr;
    while (head)
    {
      arr.push_back(head->val);
      head = head->next;
    }

    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
    {
      while (!st.empty() && arr[i] > arr[st.top()])
      {
        int ind = st.top();
        st.pop();
        arr[ind] = arr[i];
      }
      st.push(i);
    }
    while (!st.empty())
    {
      arr[st.top()] = 0;
      st.pop();
    }
    arr[arr.size() - 1] = 0;
    return arr;
  }
};