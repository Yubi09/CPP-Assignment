#include <bits/stdc++.h>
using namespace std;

class Node
{ 
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int countNodesInLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            int count = 1;
            Node *temp = slow;
            while (temp->next != slow)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }
    }
    return 0;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next;
    cout << countNodesInLoop(head);
    return 0;
}

