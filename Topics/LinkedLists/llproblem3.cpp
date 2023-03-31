//reverse a linked list

#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
};
void insertBegin(Node **head, int d)
{
    Node * newNode = new Node();
    newNode->data=d;   
    newNode->next=(*head);
    (*head)=newNode;
}
void display(Node * head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
Node * reverse(Node * head)
{
    Node * head2 = NULL;
    Node * newnode= head ;
    while(newnode)
    {
        insertBegin(&head2,newnode->data);
        newnode=newnode->next;
    }
    return (head2);
}

int main()
{
    Node * head = new Node();
    head->data=10;
    for(int i=0;i<10;i++)
    {
        insertBegin(&head,i);
    }
    cout<<"Original : ";display(head);
    Node * reverseList = reverse(head);
    cout<<"Reversed : ";display(reverseList);
    return 0;
}