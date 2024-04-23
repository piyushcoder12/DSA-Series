#include<iostream>
using namespace std;

int binary_search(int arr[],int n ,int target)
{
    int start=0;
    int end=n-1;

    int mid=start+(end-start)/2;
    while(start<=end)
    {
      if(arr[mid]==target) 
      {
         return mid;
      } 
      else if(target>=mid)
      {
        start=mid+1;
      }
      else if(target<=mid){
        end=mid-1;
      }
      mid=start+(end-start)/2;

    }
    return -1;
}
int main()
{
    system("cls");
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int n=10;
    int target=10;
    int ans=binary_search(arr,n,target);
    cout<<ans;
}