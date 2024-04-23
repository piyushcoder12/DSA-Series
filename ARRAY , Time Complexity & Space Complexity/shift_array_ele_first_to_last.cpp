#include<iostream>
using namespace std;

void shift_arr(int arr[],int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]= temp;
}
int main()
{
    int arr[]={1,2,3,4,4,55,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    shift_arr(arr,n);

    //print 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}