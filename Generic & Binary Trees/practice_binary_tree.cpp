#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;


Node(int val)
{
    this->data = val;
    this->left = NULL;
    this->right = NULL;
}
};
Node* createtree(){
     cout<<"enter thr value"<<endl;

     int data;
     cin>>data;

     if(data == -1) // Base case

     {
        return NULL;
     }

     Node* root = new Node(data);

     // step 2 : create left subtree 
     root->left = createtree();
    cout<< "left of Node"<<root->data<<endl;
     // step 3 : create right subtree
     root->right = createtree();
    cout<< "right of Node"<<root->data<<endl;
     return root; // newNode same as root 
}
int main()
{
 Node* root = createtree();
 cout<< root->data << endl;

}