#include<iostream>
using namespace std;
void shift_ele(int arr[],int n)
{
    int temp = arr[n-1];
    for(int i = n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    int arr[]={1,32,43,4,5,65,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    shift_ele(arr,n);

    //print 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}