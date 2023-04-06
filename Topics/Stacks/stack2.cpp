// implementation of stack using linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int _data){
        data=_data;
        next=NULL;
    }
};
class Stack{
    public:
    Node *head;
    Stack()
    {
        head=new Node(10);
        head->next=NULL;
    }
    void display()
    {
        Node * temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void push(int _data)
    {
        Node* newnode= new Node(10);
        newnode->data= _data;
        newnode->next= head;
        (head)=newnode;
    }
};
int main()
{
    Stack S1;
    S1.push(20);
    S1.display();
    return 0;
}