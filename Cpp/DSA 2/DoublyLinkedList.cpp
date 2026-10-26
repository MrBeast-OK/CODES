#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;  //Node* next, *prev;  
    Node* prev;      // Alternative way to declare multiple pointers of the same type
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main()
{
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->prev = head;  // Set the previous pointer of the second node

    head->next->next = new Node(30);
    head->next->next->prev = head->next;  // Set the previous pointer of the third node

    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;  // Set the previous pointer of the fourth node

    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << " <-> ";
        }
        temp = temp->next;
    }
    return 0;
}