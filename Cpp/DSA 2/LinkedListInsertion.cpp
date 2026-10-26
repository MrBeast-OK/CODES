#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor to initialize a new node with given data and set next to nullptr
    Node(int x)
    {
        data = x;
        next = nullptr;

    }
};
// Function to insert a new node at the front of the linked list
Node* insertAtFront(Node* head, int x)
{
    Node* newNode = new Node(x); // Create a new node with the given data
    newNode->next = head; // Link the new node to the current head of the linked list
    return newNode; // Return the new node as the new head of the linked list
}

void printList(Node* head)
{
    Node* sum = head; // Start from the head of the linked list
    while (sum != nullptr) 
    {   //Traverse the linked list until the end
        cout << sum->data << " "; // Print the data of the current node
        sum = sum->next; // Move to the next node
    } 

    if (sum->next != nullptr)
    {
        cout << sum->data << " "; // Print the data of the last node if it exists
    }

    cout << endl; 
}

int main()
{
    Node* head = new Node(2);
    head -> next = new Node(3);
    head -> next -> next = new Node(4);
    head -> next -> next -> next = new Node(5);

    int x = 1; // Data to be inserted at the front of the linked list
    head = insertAtFront(head, x); // Insert the new node at the front and

    printList(head); // Print the linked list after insertion

    return 0;
}