#include<bits/stdc++.h>
using namespace std;

void unique_element(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
      ans=ans^arr[i]; 
    }
    cout<<ans;
}
int main()
{
    int arr[9]={1,3,4,5,3,4,6,5,1};
    int n=9;
    unique_element(arr,n);
}