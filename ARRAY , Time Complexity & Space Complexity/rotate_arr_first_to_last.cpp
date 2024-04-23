#include<iostream>
using namespace std;

void rotate_f_l(int arr[],int n,int k)
{
    if(k==0)
    return ;

    int temp = arr[0];

    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp;

    rotate_f_l(arr,n,k-1);
}
int main()
{
    int arr[]={1,3,4,54,5,66,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k =3;
    rotate_f_l(arr,n,k);

    //print 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}