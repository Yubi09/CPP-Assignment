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
private:
  ListNode *reverse(ListNode *head)
  {
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nextNode = NULL;

    while (curr != NULL)
    {
      nextNode = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nextNode;
    }

    return prev;
  }

public:
  ListNode *removeNodes(ListNode *head)
  {
    if (!head)
      return nullptr;

    ListNode *newHead = reverse(head);

    ListNode *curr = newHead;
    ListNode *prev = NULL;

    int max = curr->val;

    while (curr != NULL && curr->next != NULL)
    {
      if (curr->next->val < max)
      {
        ListNode *temp = curr->next;
        curr->next = temp->next;
      }
      else
      {
        max = curr->next->val;
        curr = curr->next;
      }
    }

    return reverse(newHead);
  }
};