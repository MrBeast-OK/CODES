#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        data = d;
        prev =nullptr;
        next =nullptr;
    }
};

// Function to delete the last node of the doubly linked list
Node *delLast(Node *head) 
{
    // Corner cases
    if (head == NULL)
        return NULL;
    if (head->next == NULL) 
    {
        delete head;
        return NULL;
    }

    // Traverse to the last node
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    // Update the previous node's next pointer
    curr->prev->next = NULL;

      // Delete the last node
    delete curr; 

    // Return the updated head
    return head;
}

void printList(Node *head) 
{
    Node *curr = head;
    while (curr != NULL) 
    {
        cout << curr->data << " ";
        if (curr->next != nullptr)
        {
            cout << "<-> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    cout << "After Deletion at the end: ";
    head = delLast(head);

    printList(head);

    return 0;
}