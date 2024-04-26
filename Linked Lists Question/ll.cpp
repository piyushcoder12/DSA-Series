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
    // detructor call
    ~Node(){
        cout<<"Destructor Call for:"<<this->data<<endl;
    }

};


// int getcount(Node* head)
// {
//     int count =0;
//     Node*temp = head;
    
//     while(temp!= NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     //cout<<"LL length is :  "<<count;
//     return count;
// }

void insertAtHead(Node* &head,Node* &tail, int data) // head ko pass by reference bhejna h 
//agr pass by value bhejoge tou nhi aayega bhaiya m bhi glti ki thi.

{
    if(head ==NULL)
    {
        //empty LL
        // 1 create a node
        Node* temp = new Node(data);
        // 2 head = new node
        head = temp;
        tail = temp;
    }
    else{
        // non - empty
         //1 create a Node
        Node* temp = new Node(data);
        //2 new node point to the head
        temp->next = head;
        //3 newnode is head 
        head = temp;
    }
   
}

void insertAtTail(Node*&head, Node*&tail, int data)
{
    if(head==NULL && tail == NULL)
    {
        //empty
        //1 create 
        Node* temp = new Node(data);
        //2 single node entrire list me tou tail ko is pr point krwado
        head = temp;
        tail = temp;
    }
    else {
        //non-empty
        //1 create node
        Node* temp = new Node(data);
        //2 tail ka next new node 
        tail->next = temp;
        // 3 tail new node
        tail = temp;
    }
}

// void createTail(Node* head,Node* &tail)
// {
//     Node* temp = head;

//     while(temp-> next!= NULL)
//     {
//         temp = temp->next;
//     }
//     // jab ye loop khatam hoga
//     // then aapke temp wala pointer 
//     //khatam hoga last node pre 
//     tail = temp;
// }
int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

// void insertAtPosition(Node* &head, Node* &tail,int data, int position)
// {
//     if(position== 1)
//     {
//         insertAtHead(head, tail, data);
//     }
//    else if(position > len) {
//                 insertAtTail(head, tail, data);
//                 return;
//         }
//     else{
//         Node*newnode = new Node(data);

//         Node*prev = NULL;
//         Node*curr = head;
//         while(position!= 1)
//         {
//             prev= curr;
//             curr = curr->next;
//             position--;

//         }
//         prev->next = newnode;
//         newnode->next= curr;
//     }
// }
    void insertAtPosition( Node* &head, Node* &tail,int data, int position) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            prev ->next = newNode;

            //step4:
            newNode->next = curr;
            
        }
        
}
void print(Node*head)   
{
    // ll traversal krne k liye temproroy pointer banayge
    Node*temp = head;
    int count=0;
    while(temp!=NULL)
    {
        //count++;
        //cout<<"before insertion";
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    //cout<<"LL length is :  "<<count;
}

void deleteNode(Node* & head, Node*&tail,int position)
{
    //empty LL
    if(head==NULL)
    {
        cout<<"Cannot delete , LL is empty"<<endl;
        return;
    }

    // single element 
    if(head== tail)
    {
        // single elememnmt 
        Node*temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return ;
    }

    int len = findLength(head);
    // delete from head 
    if(position == 1)
    {
        // first node delete 
        // 1. create a temp node
        Node*temp = head;
        //2. 
        head = head->next;

        temp->next = NULL;

        delete temp;
    }
    else if(position == len)
    {
        // last node ko delete kr do 
        // find prev 
        Node*prev = head;
        while(prev->next!=tail)
        {
            prev = prev->next;
        }

        // prev node ka link null krdo
        prev->next = NULL;
        //delete tail
        delete tail;
        // update tail
        tail= prev;
    }
    else{
        // middle node ko delete kr do 

        // step 1 set prev/curr pointers 
        Node*prev =NULL;
        Node*curr= head;
        while(position!=1)
        {
            position--;
            prev=curr;
            curr= curr->next;
        }
        //step2 prev->next me curr->next add kr do
         prev->next = curr->next;

         //step3 node isolate krdo
         curr->next= NULL;

         // step 4 delete curr
         delete curr;
    }
}
int main()
{

    Node* head = NULL;
    Node * tail = NULL;

    insertAtHead(head,tail, 10);
    insertAtHead(head, tail , 20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);

    print(head);
    insertAtPosition(head, tail , 3, 3);
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);

    // first->next = second;
    // second ->next = third;
    // third->next = fourth;
    // fourth->next = NULL;

    // Node*head = first;

    // Node*tail = fourth;

    // print(head);

    //getcount(head);
    // insertAtHead(head,tail,300);

    // print(head);

    // insertAtTail(head,tail,500);

    // print(head); 
    deleteNode(head, tail, 2);
    print(head);
    cout<<endl;
   }