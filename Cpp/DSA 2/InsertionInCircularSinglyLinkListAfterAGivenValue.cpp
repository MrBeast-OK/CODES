#include <bits/stdc++.h>
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

Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

void print(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

Node* insertAfterValue(Node* head, int value, int data) {
    if (head == NULL) return head;
    Node* temp = head;
    do {
        if (temp->data == value) {
            Node* newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    } while (temp != head);
    return head; // Value not found, return original list
}

int main() {
    Node* head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    cout << "Original List: ";
    print(head);
    
    int valueToInsertAfter = 2;
    int newValue = 5;
    head = insertAfterValue(head, valueToInsertAfter, newValue);
    
    cout << "List after inserting " << newValue << " after " << valueToInsertAfter << ": ";
    print(head);
    
    return 0;
}