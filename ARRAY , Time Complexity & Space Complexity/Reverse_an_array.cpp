#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int size)
{
    //i is start position on array and j is ending position on array
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int l=0;l<size;l++)
    {
        cout<<arr[l]<<" ";
    }

}
int main()
{
    system("cls");
    int arr[8]={10,20,30,40,50,60,70,80};
    int n=8;
    reverse(arr,n);
}