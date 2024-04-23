#include<iostream>
using namespace std;

int  missingnum(int arr[], int n)
{
    int sum =0;
    for(int i =0; i< n ; i++)
    {
        sum = sum + arr[i];
    }
    int totalsum = ((n)*(n+1))/2;
    int ans = totalsum - sum ;

    // print ans 
    return  ans;
}
int main()
{
    int arr[] = { 1,2,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    int l =missingnum(arr,n);
    cout<<l;
}