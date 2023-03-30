#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
};
void insertAtEnd(Node ** head, int data)
{
    if((*head==NULL))
    {
        (*head)=new Node();
        (*head)->data=data;
        (*head)->next=(*head)->prev=NULL;
    }
    else{
    Node* newnode= new Node();
    newnode->next=NULL;
    newnode->data=data;

    Node * cur = (*head);
    Node * pre = NULL;

    while(cur->next!=NULL)
    {
        pre=cur;
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->prev=cur;
    }
}
void deleteAtEnd(Node ** head)
{
    if((*head==NULL))
    {
        cout<<"DLL is already empty"<<endl;
    }
     else if((*head)->next==NULL)
   {
    (*head)=NULL;
   }
   else {
    Node * cur = (*head);
    Node * pre = NULL;

    while(cur->next!=NULL)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=NULL; 
   }
}

void insertAtBeginning(Node ** head, int data)
{
    
    if((*head==NULL))
    {
        (*head)=new Node();
        (*head)->data=data;
        (*head)->next=(*head)->prev=NULL;
    }
    else{
        Node* newnode= new Node();
        newnode->data=data;
        newnode->next=(*head);
        (*head)->prev=newnode;
        newnode->prev=NULL;
        (*head)=newnode;
    }
}
void deleteAtBeginning(Node ** head)
{
    if((*head==NULL))
    {
        cout<<"DLL is already empty"<<endl;
    }
    else if((*head)->next==NULL)
   {
    (*head)=NULL;
   }
   else {
    Node * temp = new Node();
    temp=(*head);
    (*head)=(*head)->next;
    free(temp);
   }
}
void display(Node * head)
{
    Node * temp = new Node();
    temp=head;
    cout<<"start"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"end"<<endl;
}
int main()
{
    Node * head = new Node();
    head->data= 10;
    head->prev=NULL;
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
            deleteAtBeginning(&head);
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
} // namespace std;
