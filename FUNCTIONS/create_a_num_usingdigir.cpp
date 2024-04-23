#include<bits/stdc++.h>
using namespace std;

void countdigit(long long n)
{
    if(n==0)
    {
        cout<<"1";
    }
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
}
int main()
{
    system("cls");
    long long n;
    cin>>n;

    countdigit(n);
}
