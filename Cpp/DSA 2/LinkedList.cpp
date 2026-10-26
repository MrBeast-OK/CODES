#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor to initialize a new node with given data and set next to nullptr
    Node(int new_data){
        data = new_data;
        next = nullptr;
    }
};

int main()
{
    Node* head = new Node(10); // Create a new node with data 10 and set it as the head of the linked list
    //calling the constructor to create a new node with data 10 and assign it to the head pointer

    // Adding more nodes to the linked list
    head->next = new Node(20); // Create a new node with data 20 and link it to the head

    // You can continue adding more nodes as needed
    head->next->next = new Node(30); // Create a new node with data 30 and link it to the second node

    //link the fourth node
    head->next->next->next = new Node(40); // Create a new node with data 40 and link it to the third node

    // Print the linked list
    Node* current = head; // Start from the head of the linked list
    while (current != nullptr) 
    { // Traverse the linked list until the end
        cout << current->data << " "; // Print the data of the current node
        current = current->next; // Move to the next node
    }   
}