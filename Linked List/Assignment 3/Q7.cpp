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
  ListNode *reverseList(ListNode *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return head;
    }
    ListNode *newhead = reverseList(head->next);
    ListNode *front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
  }
  ListNode *findkthnode(ListNode *temp, int k)
  {
    k = k - 1;
    while (k > 0 && temp != NULL)
    {
      k--;
      temp = temp->next;
    }

    return temp;
  }

public:
  ListNode *reverseKGroup(ListNode *head, int k)
  {
    ListNode *temp = head;
    ListNode *prev = NULL;
    while (temp != NULL)
    {
      ListNode *knode = findkthnode(temp, k);

      if (knode == NULL)
      {
        if (prev)
        {
          prev->next = temp;
        }
        break;
      }
      ListNode *nextnode = knode->next;
      knode->next = NULL;
      reverseList(temp);
      if (temp == head)
      {
        head = knode;
      }
      else
      {
        prev->next = knode;
      }
      prev = temp;
      temp = nextnode;
    }
    return head;
  }
};