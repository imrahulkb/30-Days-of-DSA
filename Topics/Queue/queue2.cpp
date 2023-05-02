//stack using linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int _data)
    {
        data=_data;
        next=NULL;
    }
};
class Queue{
    public:
    Node * head=NULL;
    Node * tail=NULL;
    Queue()
    {
        head = new Node(0);
        tail = head;
    }
    Queue(int _data)
    {
        head = new Node(_data);
        tail = head;
    }
    void enqueue(int _data)
    {
        Node * newNode = new Node(_data);
        if(tail!=NULL)
        {
            tail->next = newNode;
            tail=newNode;
        }
        else {
            tail = head = new Node(_data);
        }
    }
    void dequeue()
    {
        if(head->next!=NULL)
        head=head->next;
        else
        head=tail=NULL;
    }
    void display(){
        Node * temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main()
{
    cout<<"Hello"<<endl;
    Queue Q(20);
    Q.enqueue(10);
    Q.enqueue(120);
    Q.enqueue(103);
    Q.enqueue(410);
    Q.display();
    cout<<endl;
    Q.dequeue();
    Q.dequeue();
    Q.display();
    return 0;
}