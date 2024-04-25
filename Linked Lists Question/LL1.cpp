#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next ;

    //constructor 
    //why used constructor bcz constructor is intialize the object call
    Node()// defaut constructor 
    {
        cout<<"I am piyushag coder";
        this->next = NULL;
    }
    Node(int data)
    {
        
        this->data = data;
        this->next = NULL;
    }

};

void print(Node* head)
{
    // ll traverse krne k liye temporary pointer banayege
    Node* temp = head;


    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    // creation of node
   // Node p;
   Node* first= new Node(10);
   Node*second = new Node(20);
   Node*third = new Node(30);
   Node*fourth = new Node(40);
   Node*fifth = new Node(50);
   Node* sixth = new Node(60);
   first->next =second;
   second -> next = third ;
   third ->next = fourth;
   fourth->next = fifth;
   fifth->next = sixth;
   sixth->next = NULL;  // ll 

    Node*head = first;

    print(head);
    return 0;
}