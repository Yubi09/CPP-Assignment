#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(int idx, int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else if (idx == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            if (newNode->next == NULL) {
                tail = newNode;
            }
        }
    }

    void remove(int idx) {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else if (idx == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
            if (temp->next == NULL) {
                tail = temp;
            }
        }
    }

    int get(int idx) {
        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        return temp->data;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insert(0, 1);
    ll.insert(1, 2);
    ll.insert(2, 3);
    ll.insert(3, 4);
    ll.insert(4, 5);
    ll.display();
    ll.remove(2);
    ll.display();
    cout << ll.get(2) << endl;
    return 0;
}