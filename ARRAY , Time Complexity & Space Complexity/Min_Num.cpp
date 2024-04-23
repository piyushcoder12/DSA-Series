#include<bits/stdc++.h>
using namespace std;

void min_num(int arr[],int n)
{
    int min_v=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min_v)
        {
            min_v= arr[i];
        }
    }
    cout<<min_v;
}
int main()
{
    int arr[]={11,2,3,4,5,6,7,8,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    min_num(arr,n);
}