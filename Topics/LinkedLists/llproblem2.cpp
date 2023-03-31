//check whether a linkedlist is NULL-terminated or is cyclic.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
};
void display(Node * head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}
int Check(Node * head){
    Node * fast = head;
    Node * slow = head;

    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            cout<<"There is a loophole in this linked list !"<<endl;
            return 1;
        }
    }
       
    cout<<"This is a NULL ended string "<<endl;
    return 0; 
}
int main()
{
    Node * head = new Node();
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next =new Node();
    head->next->next->data =30;
    head->next->next->next =new Node();
    head->next->next->next->data = 50; //
    head->next->next->next->next = new Node();
    head->next->next->next->next->data = 60;
    head->next->next->next->next->next =new Node();
    head->next->next->next->next->next->data =70;
    head->next->next->next->next->next->next =new Node();
    head->next->next->next->next->next->next->data=80;
    head->next->next->next->next->next->next->next=  NULL;
    Check(head);
    head->next->next->next->next->next->next->next=  head->next->next;
    Check(head);

    return 0;
}