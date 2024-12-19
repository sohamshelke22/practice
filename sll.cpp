#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertatbegining(Node* &head,int data)
{
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}
void insertatend(Node* &head,int data)
{
    Node* newnode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;

}
void insertatposition(Node* &head,int data,int pos)
{
    Node* newnode=new Node(data);
    Node* temp=head;
    int cur_pos=1;
    while(cur_pos!=pos)
    {
        temp=temp->next;
        cur_pos++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deleteatbeg(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
}
void deleteatend(Node* &head)
{
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void deleteatpos(Node* &head,int pos)
{
    Node* temp=head;
    int cur_pos=1;
    while(temp!=NULL && cur_pos!=pos)
    {
        temp=temp->next;
        cur_pos++;
    }
    temp->next=NULL;
    delete temp;
    
}
void display(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
int main()
{
    Node * head=NULL;
    insertatbegining(head,20);
    insertatbegining(head,30);
    //insertatend(head,21);
    display(head);
    deleteatbeg(head);
    display(head);
}