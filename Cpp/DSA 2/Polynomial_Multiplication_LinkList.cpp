#include<bits/stdc++.h>
using namespace std;
struct node
{
    int coeff;
    int exp;
    node* next;
};
void insert(node* &head,int c,int e)
{
    node* newnode=new node();
    newnode->coeff=c;
    newnode->exp=e;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        
    }
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
    }
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->coeff<<"x^"<<head->exp;
       if(head->next!=NULL)
       {
        cout<<",";
       }
       head=head->next;
    }
}
node* multiply(node* p1,node* p2)
{
    node* result=NULL;
    while(p1!=NULL)
    {
        node* temp=p2;
        while(temp!=NULL)
        {
            int newcoeff=p1->coeff*temp->coeff;
            int newexp=p1->exp+temp->exp;
            node* r =result;
            while(r!=NULL)
            {
                if(r->exp==newexp)
                {
                    r->coeff+=newcoeff;
                    break;
                }
                r=r->next;
            }
            if(r==NULL)
            {
                insert(result,newcoeff,newexp);
            }
            temp=temp->next;
        }
        p1=p1->next;
    }
    return result;
}
int main()
{
    int n1,n2,c,e;
    cout<<"Enter number of terms in first polynomial: ";
    cin>>n1;
    cout<<"Enter coefficients and exponents for first polynomial: "<<endl;
    node* p1 = NULL;
    node* p2 = NULL;
    for(int i=0;i<n1;i++)
    {
        cin>>c>>e;
        insert(p1,c,e);
    }
    cout<<"Enter number of terms in second polynomial: ";
    cin>>n2;
    cout<<"Enter coefficients and exponents for second polynomial: "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>c>>e;
        insert(p2,c,e);
    }
    node* result=multiply(p1,p2);
    cout<<"Result of multiplication: ";
    display(result);
}