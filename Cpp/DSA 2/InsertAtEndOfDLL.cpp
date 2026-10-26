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

Node* insertAtEnd(Node* head, int new_data)
{
    Node* new_node = new Node(new_data);
    if (head == nullptr)
    {
        return new_node;  // If the list is empty, return the new node as the head
    }
    Node* curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;  // Traverse to the end of the list
    }
    curr->next = new_node;  // Point the last node's next to the new node
    new_node->prev = curr;  // Set the previous pointer of the new node to the last node
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
    head->next->next = new Node(3);
    head->next->next->prev = head->next;  // Set the previous pointer of the third node
    int data = 4;
    head = insertAtEnd(head, data);  // Insert a new node with data 4 at the end
    printList(head);  // Print the updated list
    return 0;
}