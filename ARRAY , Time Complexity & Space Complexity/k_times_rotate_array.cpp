#include<iostream>
using namespace std;

void rotate_arr(int arr[],int n, int k)
{
    if(k==0)
    return ;

    int temp = arr[n-1];

    for(int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0] = temp;

    rotate_arr(arr,n,k-1); // recursive call 
}
int main()
{
    int arr[]= { 1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k=4;
    rotate_arr(arr,n,k);

    //print 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}