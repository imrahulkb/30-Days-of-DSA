//find the nth node from the end of the linked list
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
}
int FindNth(Node * head,int n)
{
    Node * first = head;
    n--;
    while(n--)
    {
        first=first->next;
    }
    Node * second = head;
    while(first->next!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<"Nth from last is "<<second->data<<endl;
    return second->data;
}
int main()
{
    Node * head= new Node();
    head->data=10;
    head->next=NULL;

    for(int i=0;i<10;i++)
    {
        insertBegin(&head,i*10);
    }
    display(head);
    FindNth(head,10);

    return 0;
}