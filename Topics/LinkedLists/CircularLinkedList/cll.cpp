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

    head->data=10;
    head->next= head;
    insertBegin(&head,&tail,20);
     insertBegin(&head,&tail,20);
     insertEnd(&head,&tail,20);
    display(head);
    return 0;
}