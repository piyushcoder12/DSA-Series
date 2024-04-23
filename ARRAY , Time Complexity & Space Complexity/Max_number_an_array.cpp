#include<bits/stdc++.h>
using namespace std;

void maxnum(int arr[],int n)
{
    int max_ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_ans)
        {
            max_ans=arr[i];
        }
    }
    cout<<max_ans;
}
int main()
{
    int arr[12]={1,2,3,4,5,6,9,8,7,10,12,11};
    int n=12;
    maxnum(arr,n);
}