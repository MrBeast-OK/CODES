#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* deleteNode(Node* head) {
    if(head==nullptr)
    {
        return nullptr;
    }
    if(head->data==key){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node* curr=head;
    while(curr->next!=nullptr && curr->next->data!=key){
        curr=curr->next;
    }
    if(curr->next==nullptr){
        return head; // Key not found
    }
    Node* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

void printList(Node* curr)
{
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        if (curr->next!=nullptr)
        {
            cout<<" -> ";
        }
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    cout<<"Original List: ";
    printList(head);
    int key=3;
    head=deleteNode(head,key); //function call to delete the node with value 3
    cout<<"List after deleting "<<key<<": ";
    printList(head);
    return 0;
}