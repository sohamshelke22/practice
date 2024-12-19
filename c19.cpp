#include<iostream>
#include<string>
using namespace std;

struct Node
{
    public:
        int prn;
        string name;
        Node* next;
        Node(int p,string n)
        {
            prn=p;
            name=n;
            next=NULL;
        }
};
Node* head=NULL;
Node* h1=NULL;
Node* h2=NULL;

void addpresident(Node* &head,int prn,string name)
{
    Node* newnode=new Node(prn,name);
    newnode->next=head;
    head=newnode;
}


void addmember(Node* &head,int prn,string name)
{
    Node* newnode=new Node(prn,name);
    if(head==NULL)
    {
        cout<<"President must be added before members.";
        return;
    }
    Node* temp=head;
    newnode->next=temp->next;
    temp->next=newnode;

}


void addsecretary(Node* &head,int prn,string name)
{
    Node* newnode=new Node(prn,name);
    Node* temp=head;
    if(head==NULL)
    {
        cout<<"President must be added before secretary.";
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}


void deletepresident(Node* &head)
{
    if(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
}


void deletesecretary(Node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        cout<<"Cannot delete."<<endl;
    }
    else
    {
        Node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
}


void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->prn<<" "<<temp->name<<" -> ";
        temp=temp->next;
    }
    cout<<"Null"<<endl;   
}

void count(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"Total count= "<<count<<endl;   
    if(count-2<=2)
    {
        count=0;
        cout<<"Member count= "<<count<<endl;
    }
    else
    {
        count=count-2;  
        cout<<"Member count= "<<count<<endl;
    } 

}

Node* merge(Node* h1,Node* h2)
{
    if (h1==NULL) return h2;
    if (h2==NULL) return h1;
    Node* temp=h1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=h2;
    return h1;

}

int main()
{
    Node* head=NULL;

    count(head);
    addpresident(h1,1,"a");
    addsecretary(h1,2,"b");
    addmember(h1,3,"c");
    addmember(h1,4,"d");
    display(h1);

    addpresident(h2,5,"e");
    addsecretary(h2,6,"f");
    addmember(h2,7,"g");
    addmember(h2,8,"h");
    display(h2);


    
    display(merge(h1,h2));
    
    
    
}