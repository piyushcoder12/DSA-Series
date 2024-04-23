//ques:findout  element in array even or odd using recursion and store element vector
#include<iostream>
#include<vector>
using namespace std;

//function
void solve(int a[],int size,int index,vector<int>&ans)
{
    //base case
    if(index>=size)
    {
        return ;
    }
    //processing
    if(a[index]%2==0)
    {
        //even case
        ans.push_back(a[index]);
    }
   //Recursive call
   solve(a,size,index+1,ans);

}

int main()
{
    int a[]={11,20,23,45,30};
    int size=5;
    int index=0;
    //create a vector 
    vector<int>ans;
    //function create
    solve(a,size,index,ans);

    //printing vector
    for(int i=0;i<ans.size();i++)
    {
        cout<<"Element is Even"<<ans[i]<<" "<<endl;
    }

}