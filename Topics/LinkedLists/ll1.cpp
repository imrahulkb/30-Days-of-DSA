#include<iostream>
#include<malloc.h>
using namespace std;
class Node{
    public :
    int data;
    Node * next;
}; //In CPP we create a Linked List using Class
/*This class consists of 2 parts : 1.Data part:- The part which consists the actual data. 2.Pointer Part:- The part which points to the next node.*/
void insertAtEnd(Node ** head, int data) //inserts at end
{
    Node * newnode= new Node(); //create a new node to attach to the linked list.
    newnode->data=data; //setting up the new node
    newnode->next=NULL; //setting next to NULL to avoid endless loop
    Node * temp = new Node(); //temporary node to traverse to the end node
    temp = *head;
    while(temp->next!=NULL) //travel till end node
    {
        temp=temp->next;
    }
    temp->next=newnode; //at the end attach this new node
}
void display(Node * head){
    Node * temp = head;
    while(temp!=NULL) //loop untill list ends
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAtBegin(Node**head)
{
    if((*head)->next==NULL)
    (*head)=NULL;
    else{
        (*head)=(*head)->next;
    }
}
void deleteAtEnd(Node ** head)
{
    if((*head)->next==NULL)
    (*head)=NULL;
    else {
        Node * curr = *head;
        Node * prev = NULL;
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
    }
}
void insertAtBeginning(Node **head, int data)
{
    Node * temp = new Node();
    temp->data=data;
    temp->next=(*head);
    (*head)=temp;
}
int main()
{
    //must code
    Node * head = new Node();
    head->data=10;
    head->next=NULL;

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
            insertAtBeginning(&head,n);
            break;

        case 2:
            deleteAtBegin(&head);
            break;
        
        case 3:
            cout<<"Enter number to be inserted "<<endl;
            cin>>n;
            insertAtEnd(&head,n);
            break;
        case 4:
            deleteAtEnd(&head);
            break;
        default:
            break;
        }
    }
    
    return 0;
}