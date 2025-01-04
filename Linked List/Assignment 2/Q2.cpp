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
  ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
  {
    ListNode *prev = nullptr;
    ListNode *curr = list1;
    int i = 0;
    while (i < a)
    {
      prev = curr;
      curr = curr->next;
      i++;
    }
    i = 0;
    prev->next = list2;
    prev = prev->next;
    while (prev->next)
    {
      prev = prev->next;
    }
    while (i < (b - a) + 1)
    {
      curr = curr->next;
      i++;
    }
    prev->next = curr;
    return list1;
  }
};