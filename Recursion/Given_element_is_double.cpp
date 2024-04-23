//ques : given element in an array is double element present in an array using recursion
#include<iostream>
#include<vector>
using namespace std;

void solve(int a[],int size,int index,vector<int>&ans)
{
    //base case
    if(index>=size)
    {
        return ;
    }
    //processing
    if(a[index]=a[index]*2)
    {
        ans.push_back(a[index]);
    }
    //Recursive call
    solve(a,size,index+1,ans);
}
int main()
{
    int a[]={10,20,30,40,50};
    int size=5;
    int index=0;
    vector<int>ans;
    //function create
    solve(a,size,index,ans);

    //printing vector 
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";

    }

}