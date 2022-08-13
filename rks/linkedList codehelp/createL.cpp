//creating Linked list using classes

#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node* next;
    //constructor
     node(int data)
     {
         this->data=data;
         this->next=NULL;
     }
     ~node()
     {
         int value=this->data;
         //memory free
         if(this->next!=NULL)
         {
             delete next;
             this->next=NULL;
         }
         cout<<" memory is free with data "<<value<<endl;
     }
};

void insertAtHead(node * &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(node* &tail,int k)
{
    node *temp=new node(k);
    tail->next=temp;
    tail=temp;
}

void insertAtPos(node* &head,int pos,int k)
{
    if(pos==1)
    {
        insertAtHead(head,k);
        return;
    }
    node* temp=head;
    int c=1;
    while(c<pos-1)
    {
        temp=temp->next;
        c++;
    }
    node* nodeToInsert=new node(k);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(node* &head,int pos)
{
    if(pos==1) 
    {
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    node* prev=NULL;
    node* curr=head;
    int c=1;
    while(c<pos)
    {
        prev=curr;
        curr=curr->next;
        c++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}

void print(node* &head)
{
    node *temp=head;

    while(temp)
    {
        cout << temp->data << " " ;
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    
    node* node1= new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    node* head=node1;
    node* tail=node1;
    // insertAtHead(head,12);
    // insertAtHead(head,8);
    // insertAtHead(head,5);
    // print(head);
    insertAtTail(tail,14);
    insertAtTail(tail,18);
    insertAtTail(tail,6);
    insertAtTail(tail,89);
    print(head);
    insertAtPos(head,1,78);
    print(head);
    deleteNode(head,4);
    print(head);



    return 0;
}