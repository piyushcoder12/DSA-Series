#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    // constructor to intialize  a object call
    Node() // default constructor 

    {
        //cout<<"Y amns";
        this->next = NULL;
    }

    // parameter contructor bcz intialize argument 
    Node(int data)
    {
        //cout<<"I code";
        this->data= data;
        this->next = NULL;
    }
};

void print(Node*head)
{
    // ll traversal krne k liye temproroy pointer banayge
    Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    first->next = second;
    second ->next = third;
    third->next = fourth;
    fourth->next = NULL;

    Node*head = first;

    print(head);
}