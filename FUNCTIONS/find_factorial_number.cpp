#include<bits/stdc++.h>
using namespace std;

void fact(int num)
{
    int count=1;
    for(int i=1;i<=num;i++)
    {
        count=count*i;
        
    }
    cout<<count;
}

int main()
{
    int n;
    cin>>n;

    fact(n);
}