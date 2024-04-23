#include<bits/stdc++.h>
using namespace std;

int extreme(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(start==end)
        {
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;
        }
    }
      
}
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,10};
    int n=10;

    int ans= extreme(arr,n);
}