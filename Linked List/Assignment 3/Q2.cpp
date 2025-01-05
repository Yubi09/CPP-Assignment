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
  ListNode *insertionSortList(ListNode *head)
  {
    ListNode *newhead = new ListNode();
    ListNode *curr{head};

    ListNode *last;
    ListNode *begin;
    ListNode *temp;
    while (curr != nullptr)
    {
      begin = newhead->next;
      temp = curr->next;
      if (begin == nullptr || begin->val >= curr->val)
      {
        curr->next = newhead->next;
        newhead->next = curr;
      }
      else
      {
        while (begin != nullptr && begin->val < curr->val)
        {
          last = begin;
          begin = begin->next;
        }
        last->next = curr;
        curr->next = begin;
      }
      curr = temp;
    }
    return newhead->next;
  }
};