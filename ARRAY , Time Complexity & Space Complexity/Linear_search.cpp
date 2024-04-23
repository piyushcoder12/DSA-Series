#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int target=12;
    int n=5;
    bool flag;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==target)
        {
            flag=1;
        }
    }
    if(flag==1){
        cout<<"target is found";
    }
    else
    cout<<"target is not found";

    return 0;
}