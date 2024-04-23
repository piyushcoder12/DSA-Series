#include<iostream>
using namespace std;

~node()
{
    cout<<"Destructor called"
}

void deleteNode(node* &head,node* &tail,int position)
{
    //empty list
    if(head == node)
    {
        cout<<"Cannot delete,bcz LL is empty"<<endl;
        return ;
    }

    int len = findLength(head);

    //delete from head
    if(position ==1)
    {
        //first node ko delete kardo 
        node*temp = head;
        head = head->next;
        temp->next= NULL;
        delete temp;
        

    }

    else if (position ==len)
    {
        //last node ko delete krdo


    }
    
    else {
        //middle me koi node ko delete krna h 


    }
}
int main()
{

}