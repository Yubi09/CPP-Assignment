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
  ListNode *swapNodes(ListNode *head, int k)
  {
    int temp;
    ListNode *slow = head, *fast = head, *trav;
    for (int i = 1; i <= k - 1; i++)
    {
      fast = fast->next;
    }
    while (fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next;
    }
    trav = head;
    int cnt = 0;
    while (slow != NULL)
    {
      cnt++;
      if (cnt == k)
      {
        break;
      }
      trav = trav->next;
    }
    temp = slow->val;
    slow->val = trav->val;
    trav->val = temp;
    return head;
  }
};