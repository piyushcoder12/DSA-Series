#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size) { // constructor to initialize of the array in the stack 
    arr = new int[size];
    this->size = size;
    this->top = -1;
    }

    void push(int data)
    {
        if(top == size-1)
        {
            cout<<"Stack is overflow "<<endl ;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    // pop function 
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is underflow "<<endl;
            return ;
        }
        else{
            top--;
        }
    }

    bool isEmpty(){
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int getTop()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else 
        {
            return arr[top];
        }
    }
     /// ffind size of the stack 
    int getSize()
    {
        return top+1;
    }
    // print function 
    void print()
    {
        cout<<"Stack:";
        for(int i=0;i<getSize();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    // creation and  8 is sizwe of the stack
    Stack st(8);

    // push call
    st.push(100);

    st.push(50);

    st.push(30);

    //st print call 
    st.print();

    st.pop();

    st.pop();

    st.pop();

    st.print();

    cout<<endl<<"Top element of the stack:"<<" "<<st.getTop()<<endl;
    cout<<endl<<"Size of Stack:"<<" "<<st.getSize()<<endl;
    cout<<endl;
    
    if(st.isEmpty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    return 0;
}