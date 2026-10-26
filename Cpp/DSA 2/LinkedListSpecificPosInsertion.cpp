#include <bits/stdc++.h>
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
node *insertpos(node *head,int pos,int x){
    if(pos<1)
    {
        return head;
    }
    if(pos==1)
    {
        node *newnode=new node(x);
        newnode->next=head;
        return newnode;
    }
    node *curr=head;
    for(int i=1; i<pos-1 && curr!=nullptr;i++)
    {
        curr=curr->next;
        
    }
    if(curr==nullptr)
    {
        return head;
    }
    node *newnode=new node(x);
    newnode->next=curr->next;
    curr->next=newnode;
    return head;
}
int main()
{
    node *head=new node(1);
    head->next=new node(2);
    head->next->next=new node(4);
    head->next->next->next=new node(5);
    int pos=3;
    int x=3;
    head=insertpos(head,pos,x);
    node *curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}