#include <bits/stdc++.h>
using namespace std;
 
class Node {
  public: 
   int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* insertAfter(Node* head, int key, int newData) 
{
    Node* curr = head;
    while (curr != nullptr) 
    {
        if (curr->data == key)
            break;
        curr = curr->next;
    }

    if (curr == nullptr) 
    {
    	cout << "Node not found" << endl;  
      	return head;
    }

    Node* newNode = new Node(newData);
    newNode->next = curr->next;
    curr->next = newNode;
  	return head;
}

void printList(Node* node)
{
    while (node != nullptr) 
    {
        cout << node->data << " ";
        node = node->next;
    }
  	cout << endl;
}

int main() 
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int key = 3, newData = 4;
    head = insertAfter(head, key, newData);

    cout << "Linked List after insertion: ";
    printList(head);
    return 0;
}