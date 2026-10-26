#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=nullptr;
    }
};

node *insertend(node *head,int x)
{
    node *newnode=new node(x);
    if(head==nullptr)
    {
        return newnode;
    }
    node *curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=newnode;
    return head;
}

int main()
{
    node *head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);

    head=insertend(head, 6);
    node *curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}