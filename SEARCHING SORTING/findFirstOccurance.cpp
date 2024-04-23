#include<iostream>
using namespace std;

int findFirstOccurance(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans=mid;//store answer
            e=mid-1;//left me jao
        }
        else if(target>=mid)
        {
            s=mid+1;
        }
        else if(target<=mid)
        {
            e=mid-1;

        }
        // Galti yaha karte h hamesha
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[10]={10,20,30,30,30,40,50,60,70,80};
    int n=10;
    int target=30;
    int ans=findFirstOccurance(arr,n,target);
    cout<<ans;

}