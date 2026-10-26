#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int x)
    {
        data = x;
        next = prev = nullptr;
    }
};

Node* insertAtFront(Node* head, int x)
{
    Node* new_node = new Node(x);
    new_node->next = head;  // Point the new node's next to the current head
    if (head != nullptr)
    {
        head->prev = new_node;  // Set the previous pointer of the current head to the new node
    }
    return new_node;  // Return the new node as the updated head
}

void printList(Node* head)
{
    Node* curr = head;
    while (curr != nullptr)
    {
        cout << curr->data;
        if (curr->next != nullptr)
        {
            cout << " <-> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->prev = head;  // Set the previous pointer of the second node
    head->next->next = new Node(4);
    head->next->next->prev = head->next;  // Set the previous pointer of the third node

    int x = 1;
    head = insertAtFront(head, x);  // Insert a new node with data 1 at the front
    printList(head);  // Print the updated list
    return 0;
}