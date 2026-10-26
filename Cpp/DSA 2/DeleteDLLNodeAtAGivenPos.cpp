#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        prev = next = NULL;
    }
};

Node* delPos(Node* head, int x) 
{
    
    if (head == NULL)
        return head; 

    Node* curr = head;

    // traverse to the node at the given position
    for (int i = 1; curr != NULL && i < x; ++i) {
        curr = curr->next;
    }
    
    // position exceeds list length, no deletion
    if (curr == NULL)
        return head; 

    // if the node to delete is not the first node
    // update previous node's next
    if (curr->prev != NULL)
        curr->prev->next = curr->next;

    // if the node to delete is not the last node
    // update next node's prev
    if (curr->next != NULL)
        curr->next->prev = curr->prev;

    // if deleting the head, move head pointer to next node
    if (head == curr)
        head = curr->next;
        
    delete curr; 
    return head;
}

// function to print the doubly linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " <-> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head = delPos(head, 2);

    printList(head);

    return 0;
}