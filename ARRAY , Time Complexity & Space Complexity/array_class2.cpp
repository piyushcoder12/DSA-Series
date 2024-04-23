#include<iostream>
using namespace std;


void shiftArray(int arr[],int n)
{
    //step1 
    int temp = arr[n-1];
    temp = arr[n-2];

    //step2
    for(int i = n-1;i>=2;i--)
    {
        arr[i] = arr[i-1];
    }

    //step3 copy temp into 0th index
    arr[0] = temp;
    arr[1] = temp;
}
int main()
{
// int arr[]={10,20,30};
// int n= 3;

// for(int i=0; i<n/2;i++)
// {
//     for(int j=i;j<n/2;j++)
//     {
//         cout<<arr[i]<<" "<<arr[j]<<endl;
//     } 
// }

int arr[]={10,20,30,40,50};
int n = sizeof(arr)/sizeof(arr[0]);


shiftArray(arr,n);

//print 
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}