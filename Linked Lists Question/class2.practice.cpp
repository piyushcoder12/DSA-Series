#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node() // default constructor 
    {
        this->prev=NULL;
        this->next = NULL;
    }
    Node(int data){ // parameter constructor 
        this -> data = data;
        this->prev = NULL;
        this-> next= NULL;
    }
};

void print(Node* head)
{
    // create a newNode jab kabhi LL ko traverse krte samy temporary variable ka hona jaror h 

    Node*temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" "; 
        temp = temp -> next;
    }

}



void insertAtHead(Node * &head , Node *&tail , int data)
{
    // LL is empty
    if(head == NULL)
    {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;

    }
    else{
        // LL is not empty
        Node* newnode = new Node(data);
        newnode-> next = head;
        head -> prev = newnode;
        head = newnode;
    }

}

void insertAtTail(Node* & head, Node*& tail, int data)
{
    if(head == NULL){
        // LL is empty
        Node* newnode = new Node(data);
        head = NULL;
        tail = NULL;
    }
    else{
        // LL is Non empty
        Node* newnode = new Node(data);
        tail -> next = newnode;
        newnode-> prev = tail ;
        tail = newnode;
    }
}

int findlen(Node *&head)
{
    Node*temp = head ;
    int len =0;
    while(temp!= NULL)
    {
        len++;
        temp = temp->next;

    }
    return len;
}

void insertAtPosition(Node* &head, Node*&tail, int data, int position)
{
    // LL is empty
    if(head == NULL)
    {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        int len = findlen(head);
        if(position== 1)
            {
                insertAtHead(head, tail , data);
            }
        else if(position == len+1)
        {
            insertAtTail(head, tail , data);
        }
        else{
        
        // LL is not empty
        // insert in middle 
        // 1 create a node

        Node*newNode= new Node(data);
        // 2 set prev curr nextnode
        Node*prevNode = NULL;
        Node*currNode= head;
        while(position!= 1)
        {
            position--;
            prevNode= currNode;
            currNode= currNode->next;

        }
        //step 3 pointers update krre the 
        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = currNode;
        currNode->prev = newNode;
        }
        
    }
}

void deleteNode(Node*&head, Node*&tail, int position)
{
    if(head == NULL)
    {
        /// LL is empty
        cout<<"Cannot is delete , "<<endl;
    }
    if(head==tail)
    {
        // single elemnt is LL
        Node*temp = head;
        delete temp;

        head = NULL;
        tail = NULL;
        return ;
    }

    int len = findlen(head);
    if(position == 1)
    {
        // delete head 
        Node* temp = head ;
        head = head -> next;
        temp -> next = NULL;
        head ->prev = NULL;
        delete temp;
    }
    else if(position == len+1)
    {
        // delete from tail
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev=NULL;
        delete tail;
        tail = prevNode;
    }
    else{
        // delete from middle 
        // 1  set prev /curr / nextnode
        Node* prevNode= NULL;
        Node* currNode= head;
        while(position!= 1)
        {
            position--;
            prevNode= currNode;
            currNode=currNode->next;

        }
        Node*nextNode = currNode->next;
        currNode->prev = NULL;
        currNode->next =NULL;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;

        delete currNode;
    }
}
int main()
{
    Node*head = NULL;
    Node*tail = NULL; // Doubly linked list 
    insertAtHead (head , tail , 100);
    insertAtHead(head, tail , 80);
    insertAtHead (head , tail , 60);

    insertAtTail(head, tail , 4);
    insertAtPosition(head, tail , 1000, 3);

    print(head);
    cout<<endl;
    deleteNode(head,tail,1);
    print(head);


}