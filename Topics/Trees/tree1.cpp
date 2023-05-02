#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node * left;
    Node * right;
    Node(int _data)
    {
        data = _data;
        left = right = NULL;
    }
    void inorder()
    {
        if(this == NULL) return;
        this->left->inorder();
        cout<<this->data<<" ";
        this->right->inorder();   
    }
    void preorder()
    {
        if(this == NULL) return;
        cout<<this->data<<" ";
        this->left->preorder();
        this->right->preorder();   
    }
    void postorder()
    {
        if(this == NULL) return;
        this->left->postorder();
        this->right->postorder(); 
        cout<<this->data<<" ";  
    }
    Node * insert(int _data) //insert function using while loop
    {
        Node * temp = this;
        while(temp != NULL)
        {
            if(_data<=temp->data)
            {
                if(temp->left==NULL)
                    return temp->left = new Node(_data);
                else temp = temp->left;
            }
            else 
            {
                if(temp->right==NULL)
                    return temp->right = new Node(_data);
                else temp = temp->right;
            }
        }
        return NULL;
    }
    Node * insert1(int _data) //insert function using recursion technique
    {
        Node * temp = this;
        if(temp == NULL)
            return temp = new Node(_data);
        if(_data <= temp->data) 
            temp->left = temp->left->insert1(_data);
        else
            temp->right = temp->right->insert1(_data);
        return temp;
    }
};
class Tree{
    public: 
    Node * head;
    Tree(int _data)
    {
        head = new Node(_data);
    }
    void insert1(int _data)
    {
        head->insert1(_data);
    }
    void insert(int _data)
    {
        head->insert(_data);
    }
    void inorder()
    {
        head->inorder();
    } 
    void preorder()
    {
        head->preorder();
    } 
    void postorder()
    {
        head->postorder();
    }
};
int main()
{
    Tree T(10);
    T.insert(10);
    T.insert1(2);
    T.insert1(1);
    T.insert1(300);
    T.insert1(4000);
    T.preorder();
    return 0;
}
//class Tree is a head handler hence you can create multiple trees using Tree()
//class Node holds the actual value for each node