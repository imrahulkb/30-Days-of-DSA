//implementation of stacjusing array

#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int _size)
    {
        arr= new int[size];
        top=-1;
        size=_size;
    }
    bool isFull(){
        return ((top==size-1)?true:false);
       
    }
    bool isEmpty(){
        return ((top==-1)?true:false);  
    }
    void pop()
    {
        if(!isEmpty())
            top--;
        else
        cout<<"Already Empty"<<endl;
    }
    void push(int num)
    {
        if(!isFull())
        {
            arr[++top]=num;
        }
        else
        {
            cout<<"Stack is full"<<endl;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Empty"<<endl;
            return;
        }
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
};
int main()
{
    Stack S1(10);
    S1.push(10);
    S1.push(20);
    S1.display();
    S1.pop();
    S1.display();
    S1.pop();
    S1.display();
    return 0;
}