#include<iostream>
using namespace std;

bool linearSearch(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            return true;
        }
        else
        {
            i++; 
        }
        
    }
     return false;
}

int main()
{
    int a[]={10,20,30,40,50};
    int n=5;
    int target=40;
    bool linear= linearSearch(a,n,target);
    if(linear)
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}