#include<bits/stdc++.h>
using namespace std;

void countonezero(int arr[],int size)
{
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0){
            zerocount++;

        }
        if(arr[i]==1)
        {
            ++onecount;
        }
    }
    cout<<"zerocount"<<zerocount<<endl;
    cout<<"onecount"<<onecount<<endl;
}
int main()
{
    system("cls");
    int arr[]={0,1,0,0,0,1,0,0,0,1,0,1,0,1};
    int n=14;
    countonezero(arr,n);
}