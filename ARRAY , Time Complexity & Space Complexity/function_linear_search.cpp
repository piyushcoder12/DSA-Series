#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[] , int size, int target)
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int target=5;
    int n=5;
    bool ans=linearsearch(arr,n,target);
    if(ans==1)
    {
        cout<<"target is found";
    }
    else if(ans==0)
    {
        cout<<"target is not founs";
    }
}