#include<iostream>
#include<vector>
using namespace std;

void printSubarray(vector<int>&nums,int start,int end)
{
    //bae case
    if(end==nums.size())
    {
        return ;
    }
    //1 case sol
    for(int i=start;i<=end;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    //Recursie call
    printSubarray(nums,start,end+1);
}
void printsubarr(vector<int>&nums)
{
    for(int start=0;start<nums.size();start++)
    {
        int end=start;
        printSubarray(nums,start,end);
    }
}
int main()
{
    vector<int>nums{1,2,3,4,5};
    printsubarr(nums);
    return 0;
}