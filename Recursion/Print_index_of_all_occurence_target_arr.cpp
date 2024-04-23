//ques: print index of all occurence of target in array
#include<iostream>
using namespace std;

//function
void find(int a[],int size,int index,int target)
{
    //base case
    if(index>=size)
    {
        return;
    }
    //processing 
    if(a[index]==target)
    {
        cout<<index<<" ";
    }
    //Recursive call
    find(a,size,index+1,target);
}

int main()
{
    int a[]={10,20,30,40,50,50};
    int size=6;
    int target=50;
    int index=0;
    int count;
    //function create
   // find(a,size,index,target);
    find(a,size,index,target);
}
