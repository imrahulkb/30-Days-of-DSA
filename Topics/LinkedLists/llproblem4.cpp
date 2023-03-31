//How to find middle element of a linked list
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
};
Node * insertNode(Node ** head,int data){
    Node * newnode = new Node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
    return newnode;
}
void display(Node * head)
{
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node * FindMiddleElement(Node * head)
{
    Node * ptr1 = head;
    Node * ptr2 = head;
    int i=0;
    while(ptr1->next!=NULL)
    {
        if(i==0)
        {
            ptr1 = ptr1->next;
            i=1;
        }
        else if(i==1){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            i=0;
        }
    }
   // cout<<"\nPTR1 :"<<ptr1->data<<"::PTR2:"<<ptr2->data<<endl;
    return ptr2;
}
int main()
{
    Node * head= new Node();
    head->data=10;
    head->next=NULL;   
    for (int i = 0; i < 11; i++)
    {
        insertNode(&head,i*12+i*i);
    }
    Node * middle = FindMiddleElement(head);
    display(head);
    cout<<"\nMiddle Element  : "<<middle->data<<endl;


    return 0;
}