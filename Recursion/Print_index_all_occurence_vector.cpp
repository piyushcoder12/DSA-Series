//ques: print index of all occurence  store vector using recursion
#include<iostream>
#include<vector>
using namespace std;

//function create
void find(int a[],int size,int index,int target,vector<int>&ans)
{
    //base case
    if(index>=size)
    {
        return ;
    }
    //processing 
    if(a[index]==target)
    {
        ans.push_back(a[index]);
    }
    //Recursive call
    find(a,size,index+1,target,ans);
}

int main()
{
    int a[]={10,20,30,40,40,50};
    int size=6;
    int index=0;
    int target=40;
    //vector create
    vector<int>ans;
    //function create
    find(a,size,index,target,ans);

    //print vector
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}