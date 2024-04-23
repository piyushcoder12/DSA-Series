#include<bits/stdc++.h>
using namespace std;


void sortcolor(int arr[],int n)
{
    int index =0;
    int l=0;
    int r = n-1;
    while(index<=r)
    {
        if(arr[index] == 0)
        {
            swap(arr[index],arr[l]);
            index++;
            l++;
        }
        else if (arr[index]== 2)
        {
            swap(arr[index], arr[r]);
            r--;
        }
        else{
            index++;
        }
    }
    //print arr
    for(int l =0;l<n;l++)
    {
        cout<<arr[l]<<" ";
    }
}
int main()
{
    int arr[] = {0,1,1,2,0,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortcolor(arr,n);
    //print arr

}