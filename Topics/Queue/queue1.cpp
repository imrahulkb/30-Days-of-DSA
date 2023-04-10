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
class Queue{
    public: 
    Node * head;
    Queue(){
        head = new Node(10);
    }
};
int main()
{
    return 0;
}