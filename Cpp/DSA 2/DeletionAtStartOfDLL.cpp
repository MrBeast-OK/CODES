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

Node* DeleteAtStart(Node* head)
{
    if (head == nullptr)
    {
        return nullptr;  // If the list is empty, return nullptr
    }
    Node* temp = head;  // Store the current head in a temporary variable
    head = head->next;  // Move the head to the next node
    
    if (head != nullptr)
    {
        head->prev = nullptr;  // Set the previous pointer of the new head to nullptr
    }
    delete temp;  // Free the memory of the old head
    return head;  // Return the updated head of the list
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
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head = DeleteAtStart(head);  // Delete the node at the start
    printList(head);  // Print the updated list
    return 0;
}