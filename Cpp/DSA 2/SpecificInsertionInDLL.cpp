#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int new_data)
    {
        data = new_data;
        next = prev = nullptr;
    }
};

Node* insertAtPosition(Node* head, int new_data, int pos)
{
    Node* new_node = new Node(new_data);
    if (pos == 1)
    {
        new_node->next = head;  // Point the new node's next to the current head
        if (head != nullptr)
        {
            head->prev = new_node;  // Set the previous pointer of the current head to the new node
        }
        return head;  // Return the new node as the updated head
    }
    Node* curr = head;
    for (int i = 1; i< pos - 1 && curr != nullptr; i++)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        delete new_node;  // Clean up the allocated node if position is out of bounds
        return head;  // Return the original head if position is out of bounds
    }
    new_node->next = curr->next;  // Point the new node's next to the current node's next
    new_node->prev = curr;  // Point the new node's prev to the current node

    new_node->next = curr->next;  // Point the new node's next to the current node's next
    curr->next = new_node;  // Point the current node's next to the new node

    if (new_node->next != nullptr)
    {
        new_node->next->prev = new_node;  // Set the previous pointer of the next node to the new node
    }
    return head;  // Return the original head as the updated head
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;  // Set the previous pointer of the second node
    head->next->next = new Node(4);
    head->next->next->prev = head->next;  // Set the previous pointer of the third node
    int data = 3;
    int pos = 3;
    head = insertAtPosition(head, data, pos);  // Insert a new node with data 3 at position 3
    printList(head); 
    return 0;
}