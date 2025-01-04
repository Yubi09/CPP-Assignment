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
  ListNode *removeElements(ListNode *head, int val)
  {
    ListNode *d1 = new ListNode(-1, head);
    ListNode *d2 = d1;

    while (d2 != nullptr)
    {
      while (d2->next != nullptr && d2->next->val == val)
      {
        d2->next = d2->next->next;
      }
      d2 = d2->next;
    }

    ListNode *result = d1->next;

    return result;
  }
};