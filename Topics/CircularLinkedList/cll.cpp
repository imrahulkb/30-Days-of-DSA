#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
};
void insertBegin(Node ** head,Node **  tail, int data)
{
    Node * newnode = new Node();
    newnode->data = data;
    (*tail)->next = newnode;
    newnode->next=(*head); 
    (*head)=newnode;
}
void deleteAtBegin(Node ** head, Node ** tail)
{
    if((*head)==NULL)
    {
        cout<<"List is already empty"<<endl;
        return;
    }
    else if((*head)==(*tail)){
        (*head)=NULL;
        (*tail)=NULL;
    }
    else {
        (*head)=(*head)->next;
        (*tail)->next=(*head);
    }
}
void deleteAtEnd(Node ** head, Node ** tail)
{
    if((*head)==NULL)
    {
        cout<<"List is already empty"<<endl;
        return;
    }
    else if((*head)==(*tail)){
        (*head)=NULL;
        (*tail)=NULL;
    }
    else {
        Node * curr = *head;
        Node * prev = NULL;
        while(curr->next!=(*head))
        {
            prev=curr;
            curr=curr->next;

        }
    }
}

void insertEnd(Node ** head,Node **  tail, int data)
{
    Node * newnode = new Node();
    newnode->data = data;
    (*tail)->next = newnode;
    newnode->next=(*head); 
    (*tail)=newnode;
}

void display(Node * head)
{
    Node * temp = head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(temp!=head);

}
int main()
{
    Node * head= new Node();
    Node * tail = head;
    head->next=tail;
    tail->next=head;
    
    
    //menu
    int option;
    while(1)
    {
        display(head);
        cout<<"Select an Option from the following menu "<<endl;
        cout<<"1. To Insert At Beginning\n2. To Delete at Beginning\n3. To Insert at End\n4. To Delete at End\n\n ";
        cin>>option;
        switch (option)
        {
        case 1:
             cout<<"Enter number to be inserted "<<endl;
            int n;
            cin>>n;
            insertBegin(&head,&tail,n);
            break;

        case 2:
           // deleteAtBegin(&head,&tail);
            break;
        
        case 3:
            cout<<"Enter number to be inserted "<<endl;
            cin>>n;
            insertEnd(&head,&tail,n);
            break;
        case 4:
          //  deleteAtEnd(&head);
            break;
        default:
            break;
        }
    }
    return 0;
}